#include <QApplication>
#include <QDebug>
#include <QTextEdit>

#include "mivector.h"
#include "persona.h"
#include "cliente.h"
#include "poste.h"
#include "lineadetexto.h"
#include "vista.h"

int main(int argc, char *argv[])
{
    QApplication a( argc, argv );


    QTextEdit textBox1;
    QTextEdit textBox2;
    QTextEdit textBox3;

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
    textBox1.append("---------------------------------");
    textBox1.append("VECTOR PERSONA");
    textBox1.append("---------------------------------");
    for( int i = 0 ; i < vp->size() ; i++ )  {
        textBox1.append("Nombre:" + vp->get( i ).getNombre() + " | Edad:" + QString::number(vp->get( i ).getEdad()));
    }
    textBox1.append("---------------------------------");

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
    textBox2.append("VECTOR POSTE");
    textBox2.append("---------------------------------");
    for( int i = 0 ; i < vpo->size() ; i++ )  {
       textBox2.append("Altura:" + QString::number(vpo->get( i ).getAltura()));
    }
    textBox2.append("---------------------------------");

    MiVector< int > * vint = new MiVector <int>(5);
    vint->add(5);
    vint->add(2);
    vint->add(3);
    vint->add(76);
    vint->ordenar();
    textBox3.append("VECTOR INT");
    textBox3.append("---------------------------------");
    for( int i = 0 ; i < vint->size() ; i++ )  {
       textBox3.append("Num:" + QString::number(vpo->get( i ).getAltura()));
    }
    textBox3.append("---------------------------------");

    textBox1.resize(250,200);
    textBox2.resize(250,200);
    textBox3.resize(250,200);
    textBox1.show();
    textBox2.show();
    textBox3.show();

    Vista vista;

    QStringList lista;
    //lista << "julio" << "carlos" << "miguel" << "admin" << "administrador" << "Carlos" << "Franco" << "Lucas" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias" << "Matias";
    lista.append("Hola");
    lista.append("che");
    lista.append("Persona");
    lista.append("Poste");
    lista.append("Int");

    vista.setLista( lista );
    vista.show();

    return a.exec();
}
