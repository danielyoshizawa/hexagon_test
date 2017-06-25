#ifndef HEXAGON_MAINWINDOW_H
#define HEXAGON_MAINWINDOW_H

#include <QtWidgets>
#include <QMainWindow>
#include "iView.h"

class MainWindow : public QMainWindow, public iView
{
    Q_OBJECT

private:
    void initialize();
    void configure();

public:
    MainWindow();
    virtual ~MainWindow();
};


#endif //HEXAGON_MAINWINDOW_H
