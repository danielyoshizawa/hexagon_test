#include <iostream>
#include <QApplication>

int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);
    std::cout << "Hello, World!" << std::endl;
    return a.exec();
}