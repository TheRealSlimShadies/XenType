#pragma once

#include<QString>
#include<QDateTime>

struct Note
{
    int id;
    QString title;
    QString content;
    QDateTime lastModified;
};
