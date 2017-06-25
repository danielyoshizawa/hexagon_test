#ifndef HEXAGON_MAINWINDOWCONTROLLER_H
#define HEXAGON_MAINWINDOWCONTROLLER_H

class MainWindow;
class MainWindowController
{
private:
    MainWindow * view;

public:
    virtual ~MainWindowController();
    MainWindowController();

    void start();
};


#endif //HEXAGON_MAINWINDOWCONTROLLER_H
