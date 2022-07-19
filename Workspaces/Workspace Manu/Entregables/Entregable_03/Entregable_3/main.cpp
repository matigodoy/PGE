#include <QApplication>
#include <QDebug>
#include "listado.h"
#include <iostream>

using namespace std;

int main( int argc, char ** argv )  {


    QApplication a( argc, argv );

    Listado <std::string> * l1 = new Listado <std::string> (10);

    l1->agregar("Manu");
    l1->agregar("Mati");
    l1->agregar("Juan");
    l1->agregar("Eze");
    l1->agregar("Salva");
    l1->agregar("Ernesto");
    l1->agregar("Santiago");
    l1->agregar("Amparo");

    cout << " Primera prueba"<< endl;
      for( int i = 0 ; i < l1->size() ; i++ )  {
          cout << "String Numero " << i << " : " << l1->get(i)<< endl;
      }

//      l1->borrar_del_principio(2);

//      cout << " Prueba con eliminar desde el principio"<< endl;
//        for( int i = 0 ; i < l1->size() ; i++ )  {
//            cout << "String Numero " << i << " : " << l1->get(i)<< endl;
//        }

       l1->borrar_del_final(2);

      cout << " Prueba con eliminar desde el final"<< endl;
        for( int i = 0 ; i < l1->size() ; i++ )  {
            cout << "String Numero " << i << " : " << l1->get(i)<< endl;
        }












//    Listado< std::string > * l1 = new Listado< std::string >( 15 );
//    l1->agregar( "Manu" );
//    l1->agregar( "Mati" );
//    l1->agregar( "Juan" );
//    l1->agregar( "Jesus" );
//    l1->agregar( "Lucas" );

//    cout << " Primera prueba"<< endl;
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//       cout << "String numero " << i << " : " << l1->get(i)<< endl;
//    }

////    l1->borrar_del_principio(2);

////    cout << " Prueba eliminando del principio "<< endl;
////    for( int i = 0 ; i < l1->size() ; i++ )  {
////       cout << "String numero " << i << " : " << l1->get(i)<< endl;
////    }

//    l1->borrar_del_final(2);

//    cout << " Prueba eliminando del final "<< endl;
//    for( int i = 0 ; i < l1->size() ; i++ )  {
//       cout << "String numero " << i << " : " << l1->get(i)<< endl;
//    }


    return 0;
}
