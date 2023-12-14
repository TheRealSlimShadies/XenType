#include "save.h"
#include "note.h"

#include <QStandardPaths>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <Qfile>
#include <QDir>


save::save() {
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QString fullFilePath;
    QDir dir;

    if(!dir.exists(path)){
        dir.mkdir(path);
    }
    fullFilePath = QString("%0/%1").arg(path).arg(fileName);
}

std::vector<Note> save::read(){
    std::vector<Note> notes;

    QString fullFilePath;

    QFile inputFile(fullFilePath);

    if(inputFile.open(QIODevice::ReadOnly)){
        QXmlStreamReader reader(&inputFile);
        if(reader.readNextStartElement()){
            if(reader.name() == xmlRootToken){
                while(reader.readNextStartElement()){
                    readNote(reader, notes);
                }
            }
            else{
                reader.skipCurrentElement();
            }
        }
    }
    return notes;
}

bool save::write(const std::vector<std::reference_wrapper<Note>>& notes) {
    QString fullFilePath;
    QFile outputFile(fullFilePath);

    if(!outputFile.open(QIODevice::WriteOnly)){
        return false;
    }

    QXmlStreamWriter writer(&outputFile);
    writer.setAutoFormatting(true);

    writer.writeStartDocument();
    writer.writeStartElement(xmlRootToken);

    for(auto& note : notes){
        writeNote(writer, note);
    }

    writer.writeEndElement();
    writer.writeEndDocument();

    return true;
}

void save::writeNote(QXmlStreamWriter &stream, const Note &note){
    stream.writeStartElement(noteToken);
    stream.writeAttribute(titleToken, note.title);
    stream.writeAttribute(lastModifiedToken, note.lastModified.toString(dateTimeFormat));
    stream.writeTextElement(contentToken, note.content);
    stream.writeEndElement();
}

void save::readNote(QXmlStreamReader &stream, std::vector<Note> &notes){
    if(stream.name() == noteToken)
    {
        Note note;
        auto attributes = stream.attributes();
        note.title = attributes.value(titleToken).toString();
        note.lastModified = QDateTime::fromString(attributes.value(lastModifiedToken).toString(), dateTimeFormat);

        stream.readNextStartElement();
        if(stream.name() == contentToken){
            note.content = stream.readElementText();
        }
        notes.push_back(note);
    }
    stream.skipCurrentElement();
}
