#pragma once
#ifndef RENAMEDIALOG_H
#define RENAMEDIALOG_H

#include <QDialog>

namespace Ui {
class RenameDialog;
}

class RenameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RenameDialog(const QString& oldName,QWidget *parent = nullptr);
    ~RenameDialog();
    QString newName();
private:
    void onNewNameLeEdited(const QString& text);

private:
    Ui::RenameDialog *ui;
};

#endif // RENAMEDIALOG_H
