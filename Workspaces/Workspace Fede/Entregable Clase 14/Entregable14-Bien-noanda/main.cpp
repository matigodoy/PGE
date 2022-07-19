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
    Persona p4("Fede", 54);
    MiVector< Persona > * vp = new MiVector <Persona>(5);
    vp->append(p1);
    vp->append(p2);
    vp->append(p3);
    vp->append(p4);
    qDebug()<<"Main";
    vp->ordenar();
    texto.append("---------------------------------");
    texto.append("VECTOR PERSONA");
    texto.append("---------------------------------");
    for( int i = 0 ; i < vp->size() ; i++ )  {
        texto.append("Nombre: " + vp->value(i).getNombre() + " | Edad: " + QString::number(vp->value( i ).getEdad()));
    }
    texto.append("---------------------------------");

    Poste po1(34);
    Poste po2;
    Poste po3(23);
    Poste po4(1);
    MiVector< Poste > * vpo = new MiVector <Poste>(5);
    vpo->append(po1);
    vpo->append(po2);
    vpo->append(po3);
    vpo->append(po4);
    vpo->ordenar();
    texto.append("VECTOR POSTE");
    texto.append("----------------");
    for( int i = 0 ; i < vpo->size() ; i++ )  {
       texto.append("Altura: " + QString::number(vpo->value( i ).getAltura()));
    }
    texto.append("-------------");

    /*MiVector< int > * vint = new MiVector <int>(5);
    vint->append(5);
    vint->append(2);
    vint->append(3);
    vint->append(76);
    vint->ordenar();
    texto.append("VECTOR INT");
    texto.append("-------------");
    for( int i = 0 ; i < vint->size() ; i++ )  {
       texto.append("Num: " + QString::number(vint->value( i )));
    }
    texto.append("-------------");

    /*Cliente c1("Cliente 00",23,00);
    Cliente c2("Cliente 02",32,02);
    Cliente c3("Cliente 03",12,03);
    Cliente c4("Cliente 01",43,01);

    MiVector< Cliente > * vc = new MiVector <Cliente>(10);
    vc->append(c1);
    vc->append(c2);
    vc->append(c3);
    vc->append(c4);
    qDebug() << "VECTOR CLIENTES";
    qDebug() << "-------------";
    for( int i = 0 ; i < vc->size() ; i++ )  {
       qDebug() << vc->value( i ).getNombre();
       qDebug() << vc->value( i ).getEdad();
       qDebug() << vc->value( i ).getId();
       qDebug() << "-------------";
    }*/

    texto.resize(500,500);
    texto.show();

    return a.exec();
}
