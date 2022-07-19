#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

class Cliente : public Persona{
private:
    int id;
public:
    Cliente(QString nombre, int edad, int id) : Persona(nombre, edad), id(id) { }

    int getId() const;
    void setId(int newId);

    bool operator <(const Cliente & otro) {
        if(this->getId() < otro.getId()){
            return true;
        }
        return false;
    }
};

inline int Cliente::getId() const
{
    return id;
}

inline void Cliente::setId(int newId)
{
    id = newId;
}

#endif // CLIENTE_H
