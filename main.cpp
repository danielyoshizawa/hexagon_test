#include <iostream>
#include <QApplication>
#include <controller/MainWindowController.h>

int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);

    controller::MainWindowController * mainController = new controller::MainWindowController();
    mainController->start();

    return a.exec();
}