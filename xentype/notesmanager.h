#pragma once

#include "note.h"
#include <QObject>
#include<unordered_map>
#include<utility>
#include<memory>
<<<<<<< HEAD
=======
#include "save.h"
>>>>>>> 37221a0 (Resolve conflicts)


struct Note;

class QTextDocument;
class QSignalMapper;

class NotesManager : public QObject
{
    Q_OBJECT
public:
    explicit NotesManager(QObject *parent = nullptr);
    ~NotesManager();

    void createNewNote();
    void removeNote(int id);
    void renameNote(int id, const QString& newTitle);

    const Note& note (int id) const;
    QTextDocument* noteDocument(int id) const;
    std::vector<std::reference_wrapper<Note>> noteCollection();

    size_t count() const;

signals:
    void newNoteCreated(int id);
    void NoteContentChanged(int id);

private:
    void onNoteContentChanged(int id);

<<<<<<< HEAD
    void readNotes();
    void writeNotes();
=======
    void readNotes(){
    void writeNotes();

>>>>>>> 37221a0 (Resolve conflicts)
    std::unique_ptr<QTextDocument> createNewTextDocument(const Note& note);

private:
    std::unordered_map<int, std::pair<Note,std::unique_ptr<QTextDocument>>> notes;

    QSignalMapper* mapChangedSignalToNoteId = nullptr;

};

