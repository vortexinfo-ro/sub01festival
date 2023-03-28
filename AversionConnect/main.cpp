#include "mainwindow.h"
#include "databaseconnection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    databaseConnection con;
    MainWindow w;
    w.show();
    return a.exec();
}
