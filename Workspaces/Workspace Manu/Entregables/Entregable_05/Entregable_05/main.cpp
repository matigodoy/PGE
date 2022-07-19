#include <QApplication>
#include <QDebug>
#include "Listado.h"
#include <iostream>

using namespace std;

int main( int argc, char ** argv )  {


    QApplication a( argc, argv );

    Listado <QString> * l1 = new Listado <QString> (5);

    l1->agregar("Argentina");
    l1->agregar("Brasil");
    l1->agregar("Chile");
    l1->agregar("Venezuela");
    l1->agregar("Paraguay");
    qDebug()<< " El tamano del vector es : " << l1->getMaxSize();
    for(int i=0 ; i< l1->size(); i++ ){
        qDebug()<< " El Qstring en la posicion " << i << " es :" << l1->get(i);
    }
    l1->operator+(3);
    l1->agregar("Uruguay");
    l1->agregar("Mexico");
    l1->agregar("Bolivia");
    qDebug()<< " El tamano del vector es : " << l1->getMaxSize();
    for(int i=0 ; i< l1->size(); i++ ){
        qDebug()<< " El Qstring en la posicion " << i << " es :" << l1->get(i);
    }




//    l1->agregar("Manu");
//    l1->agregar("Mati");
//    l1->agregar("Juan");
//    l1->agregar("Eze");
//    l1->agregar("Salva");
//    l1->agregar("Ernesto");
//    l1->agregar("Santiago");
//    l1->agregar("Amparo");
//    qDebug()<< "El tamano del vector es : " << l1->getMaxSize();
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//       qDebug()<< " QString Numero " << i << " : " <<l1->get(i);
//       }
//    l1->operator+(5);
//    l1->agregar("Julian");
//    l1->agregar("Sebastian");
//    l1->agregar("Federico");
//    qDebug()<< "El tamano del vector es : " << l1->getMaxSize();
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//       qDebug()<< " QString Numero " << i << " : " <<l1->get(i);
//       }

//    cout << " Primera prueba"<< endl;
//      for( int i = 0 ; i < l1->size() ; i++ )  {
//          cout << "String Numero " << i << " : " << l1->get(i)<< endl;
//      }

//      l1->borrar_del_principio(2);

//      cout << " Prueba con eliminar desde el principio"<< endl;
//        for( int i = 0 ; i < l1->size() ; i++ )  {
//            cout << "String Numero " << i << " : " << l1->get(i)<< endl;
//        }

//       l1->borrar_del_final(2);

//      cout << " Prueba con eliminar desde el final"<< endl;
//        for( int i = 0 ; i < l1->size() ; i++ )  {
//            cout << "String Numero " << i << " : " << l1->get(i)<< endl;
//        }

    return 0;
}
