#include "noteslistwidget.h"
#include "ui_noteslistwidget.h"

#include "note.h"

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
}

int NotesListWidget::currentNoteId()
{
    auto* currentItem = ui->noteList->currentItem();
    int noteId = currentItem->data(Qt::UserRole).toInt();
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
    item->setText(note.title);
    item->setData(Qt::UserRole, note.id);
    ui->noteList->setCurrentItem(item);
}
