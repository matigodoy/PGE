#include <QApplication>
#include "manager.h"

int main( int argc, char ** argv )
{
    QApplication a( argc, argv );

    Manager::getMan()->iniciar();

    return a.exec();
}
