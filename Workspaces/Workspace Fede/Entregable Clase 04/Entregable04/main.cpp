#include <QApplication>
#include <QDebug>

#include "poste.h"
#include "cliente.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Cliente c1;
    c1 + 1000;



    qDebug() << ( c1 > 5000 );

    qDebug() << c1( 13000 );

    qDebug() << c1[ 23000 ];

    qDebug() << "Saldo = " << c1.getSaldo();


    Poste p1( 5 );
    Poste p2;
    Poste p3( 3 );
    Poste p4( 8 );

    Poste sumados = p1 + 5.76;
//    Poste torreFM = p1.operator+( p2 );

    qDebug() << "Poste sumados: " << sumados.getAltura();


    qDebug() << "Poste sumados con float: " << p1 + p2;




    return 0;
}
