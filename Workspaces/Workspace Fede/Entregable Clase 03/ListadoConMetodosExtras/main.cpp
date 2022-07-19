#include <QApplication>
#include <QDebug>
#include <iostream>
#include "listado.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    Listado< std::string > * l1 = new Listado< std::string >( 10 );
    l1->add( "hola" );
    l1->add( "como" );
    l1->add( "estas" );
    l1->add( "yo" );
    l1->add( "bien" );

    std::cout << "Listado inicial" << std::endl;
    for( int i = 0 ; i < l1->size() ; i++ )  {
       std::cout << l1->get( i ) << std::endl;
    }

    std::cout << l1->borrar_del_final(20) << std::endl;
    std::cout << "Listado despues del borrar_del_final" << std::endl;
    for( int i = 0 ; i < l1->size() ; i++ )  {
        std::cout << l1->get( i ) << std::endl;
    }


    std::cout << l1->borrar_del_principio(2) << std::endl;
    std::cout << "Listado despues del borrar_del_principio" << std::endl;
    for( int i = 0 ; i < l1->size() ; i++ )  {
        std::cout << l1->get( i ) << std::endl;
    }

    delete l1;

    return 0;
}
