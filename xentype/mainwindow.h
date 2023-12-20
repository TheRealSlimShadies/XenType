#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QTextEdit>
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QColor>
#include<QColorDialog>
#include<QTextCursor>
#include<QTextCharFormat>
#include<QWidget>
#include <QIcon>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class NotesManager;
struct Note;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   MainWindow(NotesManager& manager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
//handle signals from ui
    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void onNewNoteBtnClicked();

    void onRemoveNoteBtnClicked();

    void on_actionXenType_triggered();

//handle NoteManager Signals
    void onNewNoteCreated(int id);

    void onNoteContentChanged(int id);

//handle NotesListWidget Signals
    void onSelectedNoteChanged(int id);

    void onRemoveNote(int id);

    void onRenameNote(int id,const QString& newTitle);

    void on_pushButton_2_clicked();

private:

    void addNoteToList(const Note& note);
    void removeNote(int id);

    void init();
    void makeConnections();

    Ui::MainWindow *ui;
    NotesManager& notesManager;
};
#endif // MAINWINDOW_H
