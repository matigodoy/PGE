#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona{
private:
    QString nombre;
    int edad;
public:
    explicit Persona(QString nombre = "NN", int edad = 0) : nombre(nombre), edad(edad){ }
    const QString &getNombre() const;
    void setNombre(const QString &newNombre);
    int getEdad() const;
    void setEdad(int newEdad);

    bool operator<(const Persona & otro) {
        if(this->getEdad() < otro.getEdad()){
            return true;
        }
        return false;
    }
};

inline int Persona::getEdad() const
{
    return edad;
}

inline void Persona::setEdad(int newEdad)
{
    edad = newEdad;
}

inline const QString &Persona::getNombre() const
{
    return nombre;
}

inline void Persona::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

#endif // PERSONA_H
