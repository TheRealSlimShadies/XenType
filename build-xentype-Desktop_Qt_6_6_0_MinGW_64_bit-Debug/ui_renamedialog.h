/********************************************************************************
** Form generated from reading UI file 'renamedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEDIALOG_H
#define UI_RENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameDialog)
    {
        if (RenameDialog->objectName().isEmpty())
            RenameDialog->setObjectName("RenameDialog");
        RenameDialog->resize(291, 107);
        verticalLayout = new QVBoxLayout(RenameDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(RenameDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(RenameDialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RenameDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RenameDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RenameDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RenameDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RenameDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameDialog)
    {
        RenameDialog->setWindowTitle(QCoreApplication::translate("RenameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RenameDialog", "New Name", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("RenameDialog", "Enter the new name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenameDialog: public Ui_RenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEDIALOG_H
