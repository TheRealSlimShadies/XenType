#include "welcome.h"
#include "ui_welcome.h"
#include "mainwindow.h"
#include <QIcon>
#include <QApplication>
welcome::welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();

    this->close();
}

