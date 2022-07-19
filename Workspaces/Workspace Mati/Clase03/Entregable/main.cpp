#include <QApplication>
#include <QDebug>
#include "listado.h"
#include <iostream>

using namespace std;

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );


    Listado< std::string > * l1 = new Listado< std::string >( 10 );
    l1->add( "hola que onda1" );
     l1->add( "hola que onda2" );
      l1->add( "hola que onda3" );
       l1->add( "hola que onda4" );
        l1->add( "hola que onda5" );
         l1->add( "hola que onda6" );
          l1->add( "hola que onda7" );

    qDebug() << "Listado";

    for( int i = 0 ; i < l1->size() ; i++ )  {
        cout <<  l1->get( i ) << endl;
    }

    l1->borrar_del_final(2);

    qDebug() << "Listado dps borrar del final al principio";

    for( int i = 0 ; i < l1->size() ; i++ )  {
        cout <<  l1->get( i ) << endl;
    }

    l1->borrar_del_principio(2);

    qDebug() << "Listado dps borrar  del principio";

    for( int i = 0 ; i < l1->size() ; i++ )  {
        cout <<  l1->get( i ) << endl;
    }

    delete l1;

    return 0;
}
