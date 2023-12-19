#include "notewidget.h"
#include "note.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QContextMenuEvent>
#include <QMenu>
#include "renamedialog.h"
NoteWidget::NoteWidget(const Note& note, QWidget *parent) : QWidget(parent)
{
    setupGui();
    id = note.id;
    title = note.title;
    lastModified = note.lastModified.toString(dateTimeFormat);
    updateLabels();
    setToolTip(QString("%0\n%1").arg(title).arg(lastModified));
}
int NoteWidget::noteId() const
{
    return id;
}
void NoteWidget::updateContent(const Note &note)
{
    title = note.title;
    lastModified = note.lastModified.toString(dateTimeFormat);

    updateLabels();
    setToolTip(QString("%0\n%1").arg(title).arg(lastModified));
}
void NoteWidget::resizeEvent(QResizeEvent *event)
{
    updateLabels();
    QWidget::resizeEvent(event);
}
void NoteWidget::contextMenuEvent(QContextMenuEvent *event)
{
    showContextMenu(event ->globalPos());
}
void NoteWidget::setupGui()
{
    titleLbl = new QLabel();
    lastModifiedLbl = new QLabel();
    auto layout = new QVBoxLayout(this);
    layout -> addWidget(titleLbl);
    layout -> addWidget(lastModifiedLbl);
}
void NoteWidget::updateLabels()
{
    setElidedText(titleLbl,title);
    setElidedText(lastModifiedLbl,lastModified);
}
void NoteWidget::setElidedText(QLabel *label,const QString &text)
{
    auto parentObj = parent();
    if (parentObj)
    {
        auto parentWidget = qobject_cast<QWidget*>(parentObj);
        if(parentWidget)
        {
            QFontMetrics fm(label ->font());
            QString elidedText = fm.elidedText(text, Qt::ElideRight, parentWidget->width() - 20);
            label ->setText(elidedText);
        }
    }

}
void NoteWidget::showContextMenu(const QPoint &pos)
{
    QMenu contextMenu(this);
    QAction* renameAction = contextMenu.addAction("Rename Note");
    connect(renameAction, &QAction::triggered,
            this,&NoteWidget::onRenameActionTriggered);
    QAction* removeAction = contextMenu.addAction("Remove Note");
    connect(removeAction,&QAction::triggered,
            this,&NoteWidget::onRemoveActionTriggered);
    contextMenu.exec(pos);
}
void NoteWidget::onRemoveActionTriggered()
{
    emit removeNote(id);
}
void NoteWidget::onRenameActionTriggered()
{
    RenameDialog renameDlg(title,this);
    if(renameDlg.exec() == QDialog::Accepted)
    {
        emit renameNote(id,renameDlg.newName());
    }
}
