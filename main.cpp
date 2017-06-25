#include <iostream>
#include <QApplication>
#include <controllers/MainWindowController.h>

int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);

    MainWindowController * mainController = new MainWindowController();

    return a.exec();
}