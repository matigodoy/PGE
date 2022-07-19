#include "listado.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char ** argv) {
    QApplication a(argc, argv);

    Listado < int > l1( 5 );
    qDebug() << l1.add( 25 );
    qDebug() << l1.add( 26 );
    qDebug() << l1.add( 27 );
    qDebug() << l1.add( 28 );
    qDebug() << l1.add( 29 );
    qDebug() << l1.add( 3213 );

    for(int i=0; i < l1.length(); i++){
        qDebug() << l1.get(i);
    }

    return 0;
}
