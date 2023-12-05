/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(400, 300);

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
