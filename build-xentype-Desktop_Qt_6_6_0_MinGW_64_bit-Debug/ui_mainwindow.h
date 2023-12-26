/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "noteslistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionXenType;
    QAction *actionIncrease_Font_Size;
    QAction *actionDecrease_Font_Size;
    QAction *actionText_Color;
    QAction *actionBOld;
    QAction *actionUnderline;
    QAction *actionItalics;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *NewNoteBtn;
    QPushButton *RemoveNoteBtn;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QSplitter *splitter;
    NotesListWidget *NotesListWIdget;
    QLineEdit *searchLineEdit;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuEdit;
    QMenu *menuAbour;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#4A55A2"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/file/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/file/icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/file/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/file/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/file/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/file/icons/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/file/icons/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionXenType = new QAction(MainWindow);
        actionXenType->setObjectName("actionXenType");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/file/icons/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionXenType->setIcon(icon7);
        actionIncrease_Font_Size = new QAction(MainWindow);
        actionIncrease_Font_Size->setObjectName("actionIncrease_Font_Size");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/file/icons/increase font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncrease_Font_Size->setIcon(icon8);
        actionDecrease_Font_Size = new QAction(MainWindow);
        actionDecrease_Font_Size->setObjectName("actionDecrease_Font_Size");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/file/icons/decrease font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecrease_Font_Size->setIcon(icon9);
        actionText_Color = new QAction(MainWindow);
        actionText_Color->setObjectName("actionText_Color");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/file/icons/text color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText_Color->setIcon(icon10);
        actionBOld = new QAction(MainWindow);
        actionBOld->setObjectName("actionBOld");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/file/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBOld->setIcon(icon11);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName("actionUnderline");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/file/icons/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon12);
        actionItalics = new QAction(MainWindow);
        actionItalics->setObjectName("actionItalics");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/file/icons/italics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalics->setIcon(icon13);
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName("actionSuperscript");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/file/icons/superscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuperscript->setIcon(icon14);
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName("actionSubscript");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/file/icons/subscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubscript->setIcon(icon15);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #7895CB"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        NewNoteBtn = new QPushButton(centralwidget);
        NewNoteBtn->setObjectName("NewNoteBtn");
        NewNoteBtn->setAutoFillBackground(false);
        NewNoteBtn->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        NewNoteBtn->setIcon(icon);
        NewNoteBtn->setFlat(false);

        horizontalLayout->addWidget(NewNoteBtn);

        RemoveNoteBtn = new QPushButton(centralwidget);
        RemoveNoteBtn->setObjectName("RemoveNoteBtn");
        RemoveNoteBtn->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/file/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveNoteBtn->setIcon(icon16);

        horizontalLayout->addWidget(RemoveNoteBtn);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_3->setIcon(icon8);
        pushButton_3->setFlat(false);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_4->setIcon(icon9);
        pushButton_4->setFlat(false);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_5->setIcon(icon11);
        pushButton_5->setFlat(false);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_6->setIcon(icon12);
        pushButton_6->setFlat(false);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_7->setIcon(icon13);
        pushButton_7->setFlat(false);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_8->setIcon(icon10);
        pushButton_8->setFlat(false);

        horizontalLayout->addWidget(pushButton_8);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_13->setIcon(icon14);
        pushButton_13->setFlat(false);

        horizontalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_14->setIcon(icon15);
        pushButton_14->setFlat(false);

        horizontalLayout->addWidget(pushButton_14);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/file/icons/left alignment.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon17);
        pushButton_9->setFlat(false);

        horizontalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/file/icons/right alignment.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon18);
        pushButton_10->setFlat(false);

        horizontalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/file/icons/centre alignment.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon19);
        pushButton_11->setFlat(false);

        horizontalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/file/icons/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon20);
        pushButton_12->setFlat(false);

        horizontalLayout->addWidget(pushButton_12);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_15->setIcon(icon5);
        pushButton_15->setFlat(false);

        horizontalLayout->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color:#C5DFF8;"));
        pushButton_16->setIcon(icon6);
        pushButton_16->setFlat(false);

        horizontalLayout->addWidget(pushButton_16);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        NotesListWIdget = new NotesListWidget(splitter);
        NotesListWIdget->setObjectName("NotesListWIdget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NotesListWIdget->sizePolicy().hasHeightForWidth());
        NotesListWIdget->setSizePolicy(sizePolicy);
        NotesListWIdget->setStyleSheet(QString::fromUtf8("background-color:#DBE2EF"));
        searchLineEdit = new QLineEdit(NotesListWIdget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(-60, 0, 161, 21));
        splitter->addWidget(NotesListWIdget);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:#F9F7F7"));
        textEdit->setFrameShape(QFrame::NoFrame);
        splitter->addWidget(textEdit);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuAbour = new QMenu(menubar);
        menuAbour->setObjectName("menuAbour");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbour->menuAction());
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbour->addAction(actionXenType);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionXenType->setText(QCoreApplication::translate("MainWindow", "XenType", nullptr));
        actionIncrease_Font_Size->setText(QCoreApplication::translate("MainWindow", "Increase Font Size", nullptr));
        actionDecrease_Font_Size->setText(QCoreApplication::translate("MainWindow", "Decrease Font Size", nullptr));
        actionText_Color->setText(QCoreApplication::translate("MainWindow", "Text Color", nullptr));
        actionBOld->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionItalics->setText(QCoreApplication::translate("MainWindow", "Italics", nullptr));
        actionSuperscript->setText(QCoreApplication::translate("MainWindow", "Superscript", nullptr));
        actionSubscript->setText(QCoreApplication::translate("MainWindow", "Subscript", nullptr));
        NewNoteBtn->setText(QString());
        RemoveNoteBtn->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbour->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
