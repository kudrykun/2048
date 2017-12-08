#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;
    mainWindow.setGeometry(550,50,800,1000);
    mainWindow.show();

    return a.exec();
}
