#pragma once

#ifndef XMLSTORAGE_H
#define XMLSTORAGE_H

#include "note.h"
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <vector>
#include <QString>

class XmlStorage {
public:
    XmlStorage();
    std::vector<Note> read();
    bool write(const std::vector<std::reference_wrapper<Note>>& notes);

private:
    QString fullFilePath; // Declaration of fullFilePath as a member variable
    const QString fileName = "yourFileName.xml"; // Replace with your desired file name
    const QString xmlRootToken = "root";
    const QString noteToken = "note";
    const QString titleToken = "title";
    const QString lastModifiedToken = "lastModified";
    const QString contentToken = "content";
    const QString dateTimeFormat = "yyyy-MM-ddThh:mm:ss";

    void writeNote(QXmlStreamWriter& stream, const Note& note);
    void readNote(QXmlStreamReader& stream, std::vector<Note>& notes);
};

#endif // XMLSTORAGE_H
