#include "noteslistwidget.h"
#include "ui_noteslistwidget.h"
#include "note.h"
#include "notewidget.h"
#include<QVector>
NotesListWidget::NotesListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NotesListWidget)
{
    ui->setupUi(this);

    connect (ui->noteList,&QListWidget::itemSelectionChanged,this, &NotesListWidget::onItemSelectionChanged);
}

NotesListWidget::~NotesListWidget()
{
    delete ui;
}

void NotesListWidget::addNote(const Note &note)
{
    notesList.prepend(note); //notes
    auto* item = new QListWidgetItem();
    ui->noteList->insertItem(0, item);

    setupNoteItem(note, item);
}

void NotesListWidget::removeCurrentNote()
{
    auto* currentItem = ui->noteList->currentItem();
    if (currentItem != nullptr)
    {
        delete currentItem;
    }
}

void NotesListWidget::updateCurrentNote(const Note &note)
{
    if (ui->noteList->currentRow() != 0)
    {
        moveCurrentItemToTop(note);
    }
    else
    {
        auto widget = static_cast<NoteWidget*>(ui ->noteList->itemWidget(ui ->noteList->currentItem()));
        widget->updateContent(note);
    }
}

int NotesListWidget::currentNoteId()
{
    auto* currentItem = ui->noteList->currentItem();
    int noteId = static_cast<NoteWidget*>(ui -> noteList ->itemWidget(currentItem))->noteId();
    return noteId;
}

void NotesListWidget::onItemSelectionChanged()
{
    auto* currentItem = ui->noteList->currentItem();
    if (currentItem)
    {
        int id = currentNoteId();

        emit selectedNoteChanged(id);
    }
}

void NotesListWidget::moveCurrentItemToTop(const Note &note)
{
    blockSignals(true);
    auto* item = ui->noteList->takeItem(ui->noteList->currentRow());
    ui->noteList->insertItem(0,item);

    setupNoteItem(note,item);
    blockSignals(false);
}

void NotesListWidget::setupNoteItem(const Note &note, QListWidgetItem *item)
{
    NoteWidget* widget = new NoteWidget(note);
    connect(widget, &NoteWidget::removeNote,this, &NotesListWidget::removeNote);
    connect(widget, &NoteWidget::renameNote,this,&NotesListWidget::renameNote);
    ui ->noteList ->setItemWidget(item,widget);
    item->setData(Qt::UserRole, note.id);
    item ->setSizeHint(widget ->sizeHint());
    ui->noteList->setCurrentItem(item);
}
// Add this function to your NotesListWidget class
QVector<Note> matchingNotes;
void NotesListWidget::searchNotes(const QString& searchText)
{
    qDebug()<<"Search text: "<<searchText;
    qDebug()<<"Clearing the list";
    ui-> noteList ->clear();
    qDebug()<<"Clearing matchingNotes vector";
    matchingNotes.clear();
    for(const Note& note : notesList)
    {
        qDebug()<< "Note title; "<< note.title;
        if(note.title.contains(searchText, Qt:: CaseInsensitive))
        {
            matchingNotes.append(note);
        }
    }


    // Iterate through all notes and add matching ones to the list
    for (const Note& note : matchingNotes)
    {
        qDebug()<<"Note titlel: "<<note.title;
        if (note.title.contains(searchText, Qt::CaseInsensitive))
        {
            qDebug()<<"Adding matching note to the list";
            addNoteToList(note);
        }
    }
}
void NotesListWidget:: addNoteToList(const Note& note)
{
    auto* item= new QListWidgetItem();
    ui->noteList->insertItem(0, item);
    setupNoteItem(note, item);
}


