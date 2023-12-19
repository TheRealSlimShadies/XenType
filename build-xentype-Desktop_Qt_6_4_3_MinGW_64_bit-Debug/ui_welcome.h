/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(599, 419);
        welcome->setStyleSheet(QString::fromUtf8("background-color:black;"));
        label = new QLabel(welcome);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 60, 261, 131));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"Segoe UI\";\n"
"color:white;\n"
"border: 2px solid white;\n"
"border-radius:10px;"));
        pushButton = new QPushButton(welcome);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 290, 221, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border: 5px solid white;\n"
"border-radius: 10px;\n"
"color: white;"));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Form", nullptr));
        label->setText(QCoreApplication::translate("welcome", "Xentype", nullptr));
        pushButton->setText(QCoreApplication::translate("welcome", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
