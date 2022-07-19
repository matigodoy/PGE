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
    Persona( const Persona & persona );

    bool operator>( const Persona persona );
    bool operator<( const Persona persona );

    const QString &getNombre() const;
    void setNombre(const QString &newNombre);
    const QString &getApellido() const;
    void setApellido(const QString &newApellido);
    int getEdad() const;
    void setEdad(int newEdad);
};

#endif // PERSONA_H
