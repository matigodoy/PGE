#include <QApplication>
#include <QDebug>
#include <QTextEdit>

#include "mivector.h"
#include "persona.h"
#include "cliente.h"
#include "poste.h"

int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    QTextEdit textBox;

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
    textBox.append("---------------------------------");
    textBox.append("VECTOR PERSONA");
    textBox.append("---------------------------------");
    for( int i = 0 ; i < vp->size() ; i++ )  {
        textBox.append("Nombre:" + vp->get( i ).getNombre() + " | Edad:" + QString::number(vp->get( i ).getEdad()));
    }
    textBox.append("---------------------------------");

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
    textBox.append("VECTOR POSTE");
    textBox.append("---------------------------------");
    for( int i = 0 ; i < vpo->size() ; i++ )  {
       textBox.append("Altura:" + QString::number(vpo->get( i ).getAltura()));
    }
    textBox.append("---------------------------------");

    MiVector< int > * vint = new MiVector <int>(5);
    vint->add(5);
    vint->add(2);
    vint->add(3);
    vint->add(76);
    vint->ordenar();
    textBox.append("VECTOR INT");
    textBox.append("---------------------------------");
    for( int i = 0 ; i < vint->size() ; i++ )  {
       textBox.append("Num:" + QString::number(vpo->get( i ).getAltura()));
    }
    textBox.append("---------------------------------");

    textBox.resize(250,400);
    textBox.show();

    return a.exec();
}
