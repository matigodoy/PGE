#include <QApplication>
#include <QDebug>
#include "persona.h"

int main(int argv, char** argc){
    QApplication a(argv, argc);

    Persona p1("Juan", 60);
    Persona p2("Pepe", 40);

    if( p1 < p2){
        qDebug() << "Juan es menor que Pepe";
    }
    else if( p1 > p2){
        qDebug() << "Juan es mayor que Pepe";
    }

    return 0;
}
