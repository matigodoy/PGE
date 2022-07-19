#include <QApplication>
#include <QDebug>
#include "listado.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    Listado< int > * l1 = new Listado< int >( 10 );
    l1->add( 0 );
    l1->add( 1 );
    l1->add( 2 );
    l1->add( 3 );
    l1->add( 4 );

//    qDebug() << "Listado inicial";
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//        qDebug() << l1->get( i );
//    }


//    qDebug() << "Listado despues del erase";
//    qDebug() << l1->erase( 2 );
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//        qDebug() << l1->get( i );
//    }

//    l1->clear();

//    qDebug() << "Listado despues del clear";
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//        qDebug() << l1->get( i );
//    }

    qDebug() << l1->insert( 8, 222 );
    qDebug() << "Listado despues del clear";
    for( int i = 0 ; i < l1->size() ; i++ )  {
        qDebug() << l1->get( i );
    }

    delete l1;

    return 0;
}
