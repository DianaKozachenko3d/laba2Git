#include "mainwindow.h"

#include <QApplication>
#include <QAbstractItemDelegate>
#include <QChildEvent>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

string str = "Hi, cats!";
