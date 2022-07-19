#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente  {
private:
    int saldo;

public:
    Cliente() : saldo( 0 )  {
    }

    void operator+( int sumando )  {
        this->saldo += sumando;
    }

    QString operator>( int sumando )  {
        this->saldo += sumando;
        return "El saldo se ingremento en: " + QString::number( sumando );
    }

    QString operator()( int sumando )  {
        this->saldo += sumando;
        return "El saldo se ingremento con parentesis en: " + QString::number( sumando );
    }

    QString operator[]( int sumando )  {
        this->saldo += sumando;
        return "El saldo se ingremento con corchetes en: " + QString::number( sumando );
    }

    void operator-( int sustraendo )  {
        this->saldo -= sustraendo;
    }

    bool operator<( Cliente otroCliente )  {
        if ( this->saldo < otroCliente.saldo )
            return true;
        return false;
    }
    int getSaldo() const;
};

inline int Cliente::getSaldo() const  {
    return saldo;
}

#endif // CLIENTE_H
