#include "MainWindow.h"

MainWindow::MainWindow( ) :
        QMainWindow( 0 )
{
    initialize();
    configure();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initialize()
{

}

void MainWindow::configure()
{
    this->setMinimumSize(800, 600);
}
