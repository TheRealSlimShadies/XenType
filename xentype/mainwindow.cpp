#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notesmanager.h"
#include "note.h"
#include "noteslistwidget.h"
#include <QPushButton>
#include <QMessageBox>
<<<<<<< HEAD
=======
#include "aboutme.h"
>>>>>>> 37221a0 (Resolve conflicts)


MainWindow::MainWindow(NotesManager& manager,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , notesManager(manager)
{
    ui->setupUi(this);
    setWindowTitle("Xentype");
    makeConnections();
    init();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCopy_triggered()
{
    ui -> textEdit -> copy();
}


void MainWindow::on_actionCut_triggered()
{
    ui -> textEdit -> cut();
}


void MainWindow::on_actionPaste_triggered()
{
    ui -> textEdit -> paste();
}


void MainWindow::on_pushButton_15_clicked()
{
    ui -> textEdit -> undo();
}



void MainWindow::on_pushButton_16_clicked()
{
    ui -> textEdit -> redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui -> textEdit -> undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui -> textEdit -> redo();
}


void MainWindow::on_pushButton_9_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignRight);
}


void MainWindow::on_pushButton_11_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignJustify);
}


void MainWindow::on_pushButton_8_clicked()
{

    QColor color = QColorDialog::getColor(ui ->textEdit->textColor(), this, "Select Text Color");

    // Set the selected color as the text color for the QTextEdit
    if (color.isValid())
    {
        ui -> textEdit->setTextColor(color);
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if (ui -> textEdit ->fontItalic()){
    ui -> textEdit ->setFontItalic(false);
    }
    else
    {
    ui -> textEdit ->setFontItalic(true);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if (ui -> textEdit ->fontUnderline()){
    ui -> textEdit ->setFontUnderline(false);
    }
    else
    {
    ui -> textEdit ->setFontUnderline(true);
    }
}


void MainWindow::on_pushButton_5_clicked()
{

    if (ui -> textEdit->fontWeight() == 400)
    {
    ui -> textEdit ->setFontWeight(700);
    }
    else
    {
    ui -> textEdit ->setFontWeight(400);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    int n = ui -> textEdit ->fontPointSize();
    if (n)
    {
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize()+1);
    }
    else
    {
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize()+12 +1);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize() - 1);

}

void MainWindow::on_pushButton_13_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format = cursor.charFormat();

    // Toggle between superscript and normal alignment
    if (format.verticalAlignment() == QTextCharFormat::AlignSuperScript) {
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    } else {
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    }

    // Apply the format to the selected text or the cursor position
    cursor.mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_pushButton_14_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format = cursor.charFormat();

    // Toggle between superscript and normal alignment
    if (format.verticalAlignment() == QTextCharFormat::AlignSubScript) {
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    } else {
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    }

    // Apply the format to the selected text or the cursor position
    cursor.mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_actionXenType_triggered()
{
<<<<<<< HEAD
    QDialog anInstance;
=======
    Dialog anInstance;
>>>>>>> 37221a0 (Resolve conflicts)
    anInstance.setModal(true);
    anInstance.exec();
}


void MainWindow::onNewNoteBtnClicked()
{
    notesManager.createNewNote();
}

void MainWindow::onRemoveNoteBtnClicked()
{
    removeNote(ui->NotesListWIdget->currentNoteId());
}

void MainWindow::onNewNoteCreated(int id)
{
    addNoteToList(notesManager.note(id));
}

void MainWindow::onNoteContentChanged(int id)
{
    ui->NotesListWIdget->updateCurrentNote(notesManager.note(id));
}

void MainWindow::onSelectedNoteChanged(int id)
{
    auto* document = notesManager.noteDocument(id);
    if (document)
    {
    ui->textEdit->setDocument(document);
    auto cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::onRemoveNote(int id)
{
    removeNote(id);
}

void MainWindow::addNoteToList(const Note& note)
{
    ui->NotesListWIdget->addNote(note);
}

void MainWindow::removeNote(int id)
{
    QString noteTitle = notesManager.note(id).title;

    auto pressedBtn = QMessageBox::information(this, "Remove Note?",
                                               QString("Are you sure you want to remove %0?").arg(noteTitle),
                                               QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

    if (pressedBtn == QMessageBox::Yes)
    {
    if(notesManager.count()==1)
    {
        ui->textEdit->setDocument(nullptr);
    }

    ui->NotesListWIdget->removeCurrentNote();
    notesManager.removeNote(id);
    }
}
<<<<<<< HEAD

=======
void MainWindow::onRenameNote(int id,const QString& newTitle)
{
    notesManager.renameNote(id,newTitle);
    ui -> NotesListWIdget ->updateCurrentNote(notesManager.note(id));
}
>>>>>>> 37221a0 (Resolve conflicts)
void MainWindow::init()
{
    auto notesList = notesManager.noteCollection();
    std::sort(notesList.begin(), notesList.end(),
                [](const Note& left, const Note& right)
                {
                return left.lastModified < right.lastModified;
                });

    for (auto& note : notesList)
    {
    addNoteToList(note);
    }
}

void MainWindow::makeConnections()
{
    connect(ui->NewNoteBtn, &QPushButton::clicked , this, &MainWindow::onNewNoteBtnClicked);
    connect(ui->RemoveNoteBtn, &QPushButton::clicked , this, &MainWindow::onRemoveNoteBtnClicked);

    connect (&notesManager, &NotesManager::newNoteCreated, this, &MainWindow::onNewNoteCreated);
    connect (&notesManager, &NotesManager::NoteContentChanged, this, &MainWindow::onNoteContentChanged);

    connect (ui->NotesListWIdget, &NotesListWidget::selectedNoteChanged, this, &MainWindow::onSelectedNoteChanged);
<<<<<<< HEAD

=======
    connect (ui -> NotesListWIdget, &NotesListWidget::removeNote,this,&MainWindow::onRemoveNote);
    connect(ui ->NotesListWIdget,&NotesListWidget::renameNote,this,&MainWindow::onRenameNote);
>>>>>>> 37221a0 (Resolve conflicts)
}
