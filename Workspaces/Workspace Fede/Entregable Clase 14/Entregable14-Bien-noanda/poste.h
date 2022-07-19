#ifndef POSTE_H
#define POSTE_H

#include <QDebug>

class Poste{
private:
    float altura;
public:
    explicit Poste( float altura = 6 ) : altura( altura ) { }

    float getAltura() const;
    void setAltura(float newAltura);

    bool operator <(const Poste & otro) {
        if(this->getAltura() < otro.getAltura()){
            return true;
        }
        return false;
    }
};

inline float Poste::getAltura() const
{
    return altura;
}

inline void Poste::setAltura(float newAltura)
{
    altura = newAltura;
}

#endif // POSTE_H
