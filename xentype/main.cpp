#include "mainwindow.h"
#include "notesmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);

    QApplication a(argc, argv);

    NotesManager manager;
    MainWindow w { manager };
    w.show();
    return a.exec();
}
