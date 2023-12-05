#include "aboutme.h"
#include "ui_aboutme.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("AboutXentype");
}

Dialog::~Dialog()
{
    delete ui;
}
