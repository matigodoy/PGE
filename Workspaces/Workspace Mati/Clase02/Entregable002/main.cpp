#include "listado.h"
#include <QApplication>
#include <QRandomGenerator>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    Listado< int > l1(5);
    l1.add(5);

    for (int i = 0 ; i < l1.size() ; i++){
        qDebug() << l1.add( QRandomGenerator::global()->generate() );
        qDebug() << l1.get( i );
    }


    return 0;
}

