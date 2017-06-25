#include "MainWindowController.h"
#include <views/MainWindow.h>

MainWindowController::~MainWindowController()
{
    delete view;
}

MainWindowController::MainWindowController()
{
    view = new MainWindow();
}

void MainWindowController::start()
{
    view->show();
}
