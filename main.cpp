#include <iostream>
#include <QApplication>
#include <controllers/MainWindowController.h>

int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);

    MainWindowController * mainController = new MainWindowController();
    mainController->start();

    return a.exec();
}