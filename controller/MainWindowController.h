#ifndef HEXAGON_MAINWINDOWCONTROLLER_H
#define HEXAGON_MAINWINDOWCONTROLLER_H

#include <view/MainWindow.h>

namespace controller
{
    class MainWindowController
    {
    private:
        view::MainWindow * view;

    public:
        virtual ~MainWindowController();
        MainWindowController();

        void start();
    };
};

#endif //HEXAGON_MAINWINDOWCONTROLLER_H
