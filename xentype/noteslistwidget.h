#pragma once

#include <QWidget>
#include<QVector>
#include<QList>
#include"note.h"

namespace Ui {
class NotesListWidget;
}

struct Note;
class QListWidgetItem;

class NotesListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NotesListWidget(QWidget *parent = nullptr);
    ~NotesListWidget();
    void addNote(const Note& note);
    void removeCurrentNote();
    void updateCurrentNote (const Note& note);
    void searchNotes(const QString& searchText);

    int currentNoteId();
    // Add this declaration inside the class definition


signals:
    void selectedNoteChanged(int id);
    void removeNote(int id);
    void renameNote(int id,const QString& newTitle);

//private:
    //QList<Note> notesList;//


private:
    void onItemSelectionChanged();

    void moveCurrentItemToTop(const Note& note);

    void setupNoteItem(const Note& note, QListWidgetItem* item);

private:
    Ui::NotesListWidget *ui;
    QVector<Note> notesList;
    void addNoteToList(const Note &note);
};

//#endif // NOTESLISTWIDGET_H
