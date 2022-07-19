#ifndef POSTE_H
#define POSTE_H
#include <QDebug>

class Poste  {
private:
    float altura;


public:
    explicit Poste( float altura = 6 ) : altura( altura )  {

    }

    virtual ~Poste()  {
        this->altura = -1;
    }

    float getAltura() const;
    void setAltura( float altura );

//    Poste operator+( Poste otro )  {
//        Poste posteParaDevolver( this->getAltura() + otro.getAltura() );
//        qDebug() << " + " << this->getAltura() + otro.getAltura();
//        return posteParaDevolver;
//    }

    float operator+( Poste poste ){
        return( this->getAltura() + poste.getAltura() );
    }

    Poste operator+( float altura ){
        Poste nuevoPoste ( this->getAltura() + altura );
        return nuevoPoste;
    }

};

inline float Poste::getAltura() const  {
    return this->altura;
}

inline void Poste::setAltura( float altura )  {
    this->altura = altura;
}

#endif // POSTE_H
