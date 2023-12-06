#include "mainwindow.h"
#include "notesmanager.h"
#include "welcome.h"
#include <QIcon>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);

    QApplication b(argc, argv);
    b.setWindowIcon(QIcon(":/file/icons/logo.png"));
    welcome x;
    x.show();
    return b.exec();

    QApplication a(argc, argv);


    NotesManager manager;
    MainWindow w { manager };
    w.show();
    return a.exec();

}
