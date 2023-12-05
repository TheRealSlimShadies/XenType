#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutme.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Xentype");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCopy_triggered()
{
    ui -> textEdit -> copy();
}


void MainWindow::on_actionCut_triggered()
{
    ui -> textEdit -> cut();
}


void MainWindow::on_actionPaste_triggered()
{
    ui -> textEdit -> paste();
}


void MainWindow::on_pushButton_15_clicked()
{
    ui -> textEdit -> undo();
}



void MainWindow::on_pushButton_16_clicked()
{
    ui -> textEdit -> redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui -> textEdit -> undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui -> textEdit -> redo();
}


void MainWindow::on_pushButton_9_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignRight);
}


void MainWindow::on_pushButton_11_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui -> textEdit ->setAlignment(Qt::AlignJustify);
}


void MainWindow::on_pushButton_8_clicked()
{

    QColor color = QColorDialog::getColor(ui ->textEdit->textColor(), this, "Select Text Color");

    // Set the selected color as the text color for the QTextEdit
    if (color.isValid())
    {
        ui -> textEdit->setTextColor(color);
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if (ui -> textEdit ->fontItalic()){
    ui -> textEdit ->setFontItalic(false);
    }
    else
    {
    ui -> textEdit ->setFontItalic(true);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if (ui -> textEdit ->fontUnderline()){
    ui -> textEdit ->setFontUnderline(false);
    }
    else
    {
    ui -> textEdit ->setFontUnderline(true);
    }
}


void MainWindow::on_pushButton_5_clicked()
{

    if (ui -> textEdit->fontWeight() == 400)
    {
    ui -> textEdit ->setFontWeight(700);
    }
    else
    {
    ui -> textEdit ->setFontWeight(400);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    int n = ui -> textEdit ->fontPointSize();
    if (n)
    {
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize()+1);
    }
    else
    {
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize()+12 +1);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui -> textEdit -> setFontPointSize(ui -> textEdit ->fontPointSize() - 1);

}

void MainWindow::on_pushButton_13_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format = cursor.charFormat();

    // Toggle between superscript and normal alignment
    if (format.verticalAlignment() == QTextCharFormat::AlignSuperScript) {
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    } else {
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    }

    // Apply the format to the selected text or the cursor position
    cursor.mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_pushButton_14_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format = cursor.charFormat();

    // Toggle between superscript and normal alignment
    if (format.verticalAlignment() == QTextCharFormat::AlignSubScript) {
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    } else {
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    }

    // Apply the format to the selected text or the cursor position
    cursor.mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_actionXenType_triggered()
{
    Dialog anInstance;
    anInstance.setModal(true);
    anInstance.exec();
}

