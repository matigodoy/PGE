#include <QDebug>
#include <QApplication>
#include "persona.h"
#include "login.h"
#include "imagen.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    //persona1 es menos a superPerson
    Persona persona1("Lucas","Moyano",24);
    Persona superPerson("Matias","Godoy",69);

    if(persona1 < superPerson){
        qDebug() << "Persona1 es menor a superPerson";
    }
    else if(persona1 > superPerson){
        qDebug() << "Persona1 es mayor a superPerson";
    }

    //login1 es mayor a login2
    Login * login1 = new Login();
    login1->resize(800,600);
    Login * login2 = new Login();
    login2->resize(200,300);

    if(login1->operator<(login2)){
        qDebug() << "login1 es menor a login2";
    }
    else if(login1->operator>(login2)){
        qDebug() << "login1 es mayor a login2";
    }


    //imagen1 es menor a imagen2.
    Imagen * imagen1 = new Imagen();
    imagen1->load("../imagenes/imagen1.png");
    Imagen * imagen2 = new Imagen();
    imagen2->load("../imagenes/imagen2.png");

    if(imagen1->operator<(imagen2)){
        qDebug() << "imagen1 es menor a imagen2";
    }
    else if(imagen1->operator>(imagen2)){
        qDebug() << "imagen1 es mayor a imagen2";
    }




    return 0;
}
