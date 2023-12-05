#include "welcome.h"
#include <QIcon>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication b(argc, argv);
    b.setWindowIcon(QIcon(":/file/icons/logo.png"));
    welcome x;
    x.show();
    return b.exec();
}
