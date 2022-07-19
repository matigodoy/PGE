#include "persona.h"
#include <QDebug>

Persona::Persona(QString nombre, QString apellido, int edad) : nombre(nombre), apellido(apellido), edad(edad)
{

}

/*Persona::Persona(const Persona &persona)
{
    this->nombre = persona.nombre;
    this->apellido = persona.apellido;
    this->edad = persona.edad;
}*/

bool Persona::operator>(const Persona persona)
{
    if(this->edad > persona.edad){
        return true;
    }
    return false;
}

bool Persona::operator<(const Persona persona)
{
    if(this->edad < persona.edad){
        return true;
    }
    return false;
}
