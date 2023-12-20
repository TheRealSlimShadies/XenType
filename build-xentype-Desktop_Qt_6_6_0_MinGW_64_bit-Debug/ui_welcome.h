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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(600, 419);
        welcome->setStyleSheet(QString::fromUtf8("background-color:rgb(82, 218, 255);"));
        label = new QLabel(welcome);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 0, 261, 131));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"Segoe UI\";\n"
"color:Black;\n"
"border: 2px solid rgb(82, 218, 255);;\n"
"border-radius:10px;\n"
""));
        pushButton = new QPushButton(welcome);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 250, 221, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border: 5px solid white;\n"
"border-radius: 10px;\n"
"color: black;\n"
"background-color:lightblue;"));
        label_2 = new QLabel(welcome);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 300, 419));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(82, 218, 255);\n"
"border-image: url(:/file/icons/logo.png);"));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Form", nullptr));
        label->setText(QCoreApplication::translate("welcome", "Xentype", nullptr));
        pushButton->setText(QCoreApplication::translate("welcome", "Continue", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
