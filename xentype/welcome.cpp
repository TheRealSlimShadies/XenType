#include "welcome.h"
#include "ui_welcome.h"
#include "mainwindow.h"
#include <QIcon>
#include <QApplication>
#include "notesmanager.h"
welcome::welcome(QWidget *parent)
    :QWidget(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    this->hide();
    NotesManager *notesManager = new NotesManager();
    MainWindow *mainWindow = new MainWindow(*notesManager);
    mainWindow->show();

    this->close();

}
