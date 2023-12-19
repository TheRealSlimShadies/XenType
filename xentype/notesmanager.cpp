#include "notesmanager.h"
#include "note.h"
<<<<<<< HEAD
#include "save.h"
=======
>>>>>>> 37221a0 (Resolve conflicts)

#include <QTextDocument>
#include <QSignalMapper>

int nextNoteId();

NotesManager::NotesManager(QObject *parent)
    : QObject{parent}
{
    mapChangedSignalToNoteId = new QSignalMapper(this);
    connect(mapChangedSignalToNoteId, &QSignalMapper::mappedInt,
            this, &NotesManager::onNoteContentChanged);
    
    readNotes();
    
    if (notes.size()==0)
        createNewNote();
}

NotesManager::~NotesManager()
{
    writeNotes();
}

<<<<<<< HEAD



=======
>>>>>>> 37221a0 (Resolve conflicts)
void NotesManager::createNewNote()
{


    int id = nextNoteId();
    qDebug() << "Creating new note with ID:" << id;

    auto& [note, textDocument] = notes[id];
    note.id = id;
<<<<<<< HEAD
    note.title= "New Note";
=======
    note.title= "";
>>>>>>> 37221a0 (Resolve conflicts)
    note.lastModified = QDateTime::currentDateTime();
    textDocument = createNewTextDocument(note);
    
    emit newNoteCreated(id);

}

void NotesManager::removeNote(int id)
{
    notes.erase(id);
    
    if(notes.empty())
    {
        createNewNote();
    }
}

void NotesManager::renameNote(int id, const QString &newTitle)
{
<<<<<<< HEAD
    Q_UNUSED(id)
    Q_UNUSED(newTitle)
=======
    auto found = notes.find(id);
    if (found != notes.end())
    {
        auto&[note,textDocument] = found -> second;
        note.title = newTitle;
        note.lastModified = QDateTime::currentDateTime();
    }
>>>>>>> 37221a0 (Resolve conflicts)
}

const Note &NotesManager::note(int id) const
{
    return notes.at(id).first;
}

QTextDocument *NotesManager::noteDocument(int id) const
{
    auto found = notes.find(id);
    
    if(found != notes.end())
    {
        return found ->second.second.get();
    }
    return nullptr;
}

std::vector<std::reference_wrapper<Note>> NotesManager::noteCollection()
{
    std::vector<std::reference_wrapper<Note>> out;
    for(auto& i : notes)
    {
        auto& [note, QTextDocument] = i.second;
        note.content = QTextDocument ->toPlainText();
        out.push_back(note);
    }
    return out;
}

size_t NotesManager::count() const
{
    return notes.size();
}

void NotesManager::onNoteContentChanged(int id)
{
    notes.at(id).first.lastModified = QDateTime::currentDateTime();

    emit NoteContentChanged(id);
}

void NotesManager::readNotes()
{
    save storage;

    auto savedNotes = storage.read();

    for(auto n : savedNotes){
        n.id = nextNoteId();
        auto& [note, textDocument] = notes[n.id];
        note = n;
        textDocument = createNewTextDocument(note);
    }
}
<<<<<<< HEAD
=======
}
>>>>>>> 37221a0 (Resolve conflicts)

void NotesManager::writeNotes()
{
    save storage;
    storage.write(noteCollection());
}

std::unique_ptr<QTextDocument> NotesManager::createNewTextDocument(const Note &note)
{
    auto textDocument = std::make_unique<QTextDocument>(note.content);
    connect(textDocument.get(), &QTextDocument::contentsChanged,
    mapChangedSignalToNoteId,qOverload<>(&QSignalMapper::map));
    mapChangedSignalToNoteId->setMapping(textDocument.get(), note.id);
    return textDocument;
}

int nextNoteId()
{
    static int id=0;
    return ++id;
}



