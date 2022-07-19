#include <QApplication>
#include <QDebug>
#include "listado.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    Listado< QString > * l1 = new Listado <QString>(5);
    l1->add("1");
    l1->add("2");
    l1->add("3");

    qDebug() << "Maxsize antes:" << l1->getMaxSize();

    l1->operator+(2);

    l1->add("4");
    l1->add("5");
    l1->add("6");
    qDebug() <<l1->add("7");
    qDebug() <<l1->add("8");
    qDebug() << l1->add("9");

    qDebug() << "Maxsize despues:" << l1->getMaxSize();

    qDebug() << "Listado";
    for( int i = 0 ; i < l1->size() ; i++ )  {
       qDebug() << l1->get( i );
    }

    delete l1;

    return 0;
}
