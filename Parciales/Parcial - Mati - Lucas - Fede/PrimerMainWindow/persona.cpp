#include "persona.h"
#include <QDebug>

const QString &Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

const QString &Persona::getApellido() const
{
    return apellido;
}

void Persona::setApellido(const QString &newApellido)
{
    apellido = newApellido;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int newEdad)
{
    edad = newEdad;
}

Persona::Persona(QString nombre, QString apellido, int edad) : nombre(nombre), apellido(apellido), edad(edad)
{

}

Persona::Persona(const Persona &persona)
{
    this->nombre = persona.nombre;
    this->apellido = persona.apellido;
    this->edad = persona.edad;
}

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
