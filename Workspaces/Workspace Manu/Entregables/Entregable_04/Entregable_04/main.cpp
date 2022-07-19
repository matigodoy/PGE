#include <QApplication>
#include <QDebug>

#include "poste.h"
#include "cliente.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Poste p1(10);
    Poste p2(4);

    qDebug()<<"La altura de la tore es de : " << p1.operator+(p2);


//    Poste p1(5);
//    Poste p2;

//    qDebug()<<"El tamano de la torre es: "<<p1.operator+(p2);


//    Poste torreFM = p1.operator+( p2 );



    return 0;
}
