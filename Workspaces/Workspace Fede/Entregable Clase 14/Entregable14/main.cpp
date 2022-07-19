#include <QApplication>
#include <QDebug>
#include <QTextEdit>
#include "mivector.h"
#include "persona.h"
#include "cliente.h"
#include "poste.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    QTextEdit texto;

    Persona p1("Matias", 67);
    Persona p2("Lucas", 23);
    Persona p3("Manu", 45);
    Persona p4;
    MiVector< Persona > * vp = new MiVector <Persona>(5);
    vp->add(p1);
    vp->add(p2);
    vp->add(p3);
    vp->add(p4);
    vp->ordenar();
    texto.append("---------------------------------");
    texto.append("VECTOR PERSONA");
    texto.append("---------------------------------");
    for( int i = 0 ; i < vp->size() ; i++ )  {
        texto.append("Nombre:" + vp->get( i ).getNombre() + " | Edad:" + QString::number(vp->get( i ).getEdad()));
    }
    texto.append("---------------------------------");

    Poste po1(34);
    Poste po2;
    Poste po3(23);
    Poste po4(1);
    MiVector< Poste > * vpo = new MiVector <Poste>(5);
    vpo->add(po1);
    vpo->add(po2);
    vpo->add(po3);
    vpo->add(po4);
    vpo->ordenar();
    texto.append("VECTOR POSTE");
    texto.append("----------------");
    for( int i = 0 ; i < vpo->size() ; i++ )  {
       texto.append("Altura:" + QString::number(vpo->get( i ).getAltura()));
    }
    texto.append("-------------");

    MiVector< int > * vint = new MiVector <int>(5);
    vint->add(5);
    vint->add(2);
    vint->add(3);
    vint->add(76);
    vint->ordenar();
    texto.append("VECTOR INT");
    texto.append("-------------");
    for( int i = 0 ; i < vint->size() ; i++ )  {
       texto.append("Num:" + QString::number(vint->get( i )));
    }
    texto.append("-------------");

    /*Cliente c1("Cliente 00",23,00);
    Cliente c2("Cliente 02",32,02);
    Cliente c3("Cliente 03",12,03);
    Cliente c4("Cliente 01",43,01);

    MiVector< Cliente > * vc = new MiVector <Cliente>(10);
    vc->add(c1);
    vc->add(c2);
    vc->add(c3);
    vc->add(c4);
    qDebug() << "VECTOR CLIENTES";
    qDebug() << "-------------";
    for( int i = 0 ; i < vc->size() ; i++ )  {
       qDebug() << vc->get( i ).getNombre();
       qDebug() << vc->get( i ).getEdad();
       qDebug() << vc->get( i ).getId();
       qDebug() << "-------------";
    }*/

    texto.resize(500,500);
    texto.show();

    return a.exec();
}
