#include "MainWindowController.h"

namespace controller
{

    MainWindowController::~MainWindowController()
    {
        delete view;
    }

    MainWindowController::MainWindowController()
    {
        view = new view::MainWindow();
    }

    void MainWindowController::start()
    {
        view->show();
    }
}