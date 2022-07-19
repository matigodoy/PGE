#include <QApplication>
#include <QDebug>
#include "listado.h"


int main( int argc, char ** argv )  {
    QApplication a( argc, argv );


    Listado< int > * l1 = new Listado< int >( 3 );
    l1->add( 1 );
    l1->add( 8 );
    l1->add( 7 );

    qDebug() << "Listado inicial";
    for( int i = 0 ; i < l1->size() ; i++ )  {
        qDebug() << l1->get( i );
    }

    qDebug() << "Tamaño del maxsize";
    qDebug() << l1->getMaxSize();

    l1->operator+(2);

    qDebug() << "Listado despues de agregar 2 espacios";
    for( int i = 0 ; i < l1->size() ; i++ )  {
        qDebug() << l1->get( i );
    }

    qDebug() << "Tamaño del maxsize";
    qDebug() << l1->getMaxSize();

    delete l1;
    return 0;
}
