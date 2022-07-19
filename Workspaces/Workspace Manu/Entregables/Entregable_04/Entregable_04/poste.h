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

    float operator+( Poste nuevo);

    Poste operator+( float altura){
        Poste nPoste ( this->getAltura() + altura);
        return nPoste;
    }


//    float operator+(Poste otro);
//    Poste operator+( float altura ){
//           Poste nPoste ( this->getAltura() + altura );
//           return nPoste;
//       }



};

inline float Poste::getAltura() const  {
    return this->altura;
}

inline void Poste::setAltura( float altura )  {
    this->altura = altura;
}

inline float Poste::operator+(Poste nuevo){
    int altura = this->getAltura() + nuevo.getAltura();
    return altura;
}



//inline float Poste::operator+(Poste otro){
//    int altura = this->getAltura() + otro.getAltura();
//    return altura;
//}


//Poste operator+( Poste otro )  {
//    Poste posteParaDevolver( this->getAltura() + otro.getAltura() );
//    return posteParaDevolver;
//}
#endif // POSTE_H
