#include "listado.h"
#include <QApplication>
#include <QDebug>

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    Listado< int > * l1 = new Listado< int >;

    l1->add( 1 );
    l1->add( 12 );
    l1->add( 31 );
    l1->add( 661 );
    l1->add( 12 );

    for ( int i = 0 ; i < l1->size() ; i++ )  {
        qDebug() << l1->get( i );
    }

    return 0;

}
