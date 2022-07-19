#include "listado.h"
#include <QApplication>
#include <QDebug>

int main( int argc, char** argv){
    QApplication a(argc,argv);

    Listado< float > l1;
    qDebug() << l1.add(0);
    qDebug() << l1.add(1);
    qDebug() << l1.add(2);
    qDebug() << l1.add(3.14);
    qDebug() << l1.add(4);
    qDebug() << l1.add(10);
    qDebug() << l1.add(11);
    qDebug() << l1.add(12);
    qDebug() << l1.add(13);
    qDebug() << l1.add(14);

    for ( int i = 0 ; i < l1.size() ; i++) {
        qDebug() << l1.get( i );
    }
    return 0;
}
