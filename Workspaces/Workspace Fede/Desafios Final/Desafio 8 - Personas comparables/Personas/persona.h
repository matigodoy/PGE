#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona{
private:
    int edad;
    QString nombre;

public:
    explicit Persona(QString nombre = "sin nombre", int edad = 0) : edad(edad), nombre(nombre) {}

    int getEdad() const;
    void setEdad(int newEdad);
    const QString &getNombre() const;
    void setNombre(const QString &newNombre);

    bool operator <(Persona otra){
        if(this->edad < otra.edad){
            return true;
        }
        return false;
    }
    bool operator >(Persona otra){
        if(this->edad > otra.edad){
            return true;
        }
        return false;
    }
};

inline const QString &Persona::getNombre() const
{
    return nombre;
}

inline void Persona::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

inline int Persona::getEdad() const
{
    return edad;
}

inline void Persona::setEdad(int newEdad)
{
    edad = newEdad;
}


#endif // PERSONA_H
