/********************************************************************************
** Form generated from reading UI file 'aboutme.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_H
#define UI_ABOUTME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(544, 324);
        Dialog->setStyleSheet(QString::fromUtf8("background-color:#A0BFE0;\n"
"border:rgb(115,134,255);"));
        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(200, 100, 321, 221));
        textBrowser->setStyleSheet(QString::fromUtf8("color:black;\n"
""));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 20, 171, 81));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"VCR OSD Mono\";\n"
"color:black;\n"
"text-align:center;\n"
"color:black;"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 191, 181));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/file/icons/logo.png);"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">XenType is a easy-to-use Note Taking application developed by First Year students from Kathmandu University. It supports easy to use interface with user friendly buttons and formatting for seamless note-taking.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'VCR OSD Mono'; font-size:10pt;\"><br /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'VCR OSD Mono'; font-size:10pt;\"><br /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'VCR OSD Mono'; font-size:10pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">Developers:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">Anwesh Atreya</span></p>\n"
""
                        "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">Asmit Dhungana</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">Safal Gautam</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'VCR OSD Mono'; font-size:10pt;\">Samir Panday</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "XenType", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_H
