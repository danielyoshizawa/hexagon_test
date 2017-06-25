#include <iostream>
#include <QApplication>
#include <views/MainWindow.h>

int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);
    MainWindow * view = new MainWindow();
    view->show();
    return a.exec();
}