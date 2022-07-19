#include "mivector.h"
#include <QApplication>
#include <QDebug>

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    MiVector <int> v1;

    v1 + 10;
    v1 + 20;
    v1 + 30;
    v1 + 40;
    v1 + 50;

    v1 * 3;

    for ( int i = 0 ; i < v1.size() ; i++ )  {
        qDebug() << v1.get( i );
    }

    return 0;
}
