#include "mivector.h"
#include <QApplication>
#include <QDebug>

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    MiVector< int > * v1 = new MiVector< int >;

    v1->add( 1 );
    v1->add( 21 );
    v1->add( 31 );
    v1->add( 41 );
    v1->add( 15 );

    for ( int i = 0 ; i < v1->size() ; i++ )  {
        qDebug() << v1->get( i );
    }

    return 0;
}
