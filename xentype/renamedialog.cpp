#include "renamedialog.h"
#include "ui_renamedialog.h"
#include <QPushButton>
RenameDialog::RenameDialog(const QString& oldName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenameDialog)
{
    ui->setupUi(this);
    connect(ui ->lineEdit,&QLineEdit::textChanged,this,&RenameDialog::onNewNameLeEdited);
    ui -> lineEdit ->setText(oldName);
    ui ->lineEdit ->setSelection(0, ui ->lineEdit->text().size());
}

RenameDialog::~RenameDialog()
{
    delete ui;
}
QString RenameDialog::newName()
{
    return ui -> lineEdit ->text();
}

void RenameDialog::onNewNameLeEdited(const QString &text)
{
    ui -> buttonBox ->button(QDialogButtonBox::Ok) ->setEnabled (text.size() != 0);
}
