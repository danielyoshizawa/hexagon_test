#include "MainWindowController.h"
#include <views/MainWindow.h>

MainWindowController::~MainWindowController()
{

}

MainWindowController::MainWindowController()
{
    MainWindow * view = new MainWindow();
    view->show();
}
