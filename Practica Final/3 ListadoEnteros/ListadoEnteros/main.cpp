#include "listadoenteros.h"
#include <QApplication>
#include <QDebug>

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    ListadoEnteros l1;

    l1.push_back( 1 );
    l1.push_back( 13 );
    l1.push_back( 41 );
    l1.push_back( 51 );
    l1.push_back( 61 );

    for ( int i = 0 ; i < l1.size() ; i++ )  {
        qDebug() << l1.at( i );
    }

    return 0;
}