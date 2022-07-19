#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona {
private:
    QString nombre;
    QString apellido;
    int edad;

public:
    Persona(QString nombre = "Sin nombre", QString apellido = "Sin apellido", int edad = -1);
    //Persona( const Persona & persona );

    bool operator>( const Persona persona );
    bool operator<( const Persona persona );
};

#endif // PERSONA_H
