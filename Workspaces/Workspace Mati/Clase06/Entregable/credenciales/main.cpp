#include <QString>
#include <QDebug>

template< class T > class Persona  {
private:
    T id;
    int edad;
    QString nombre;

public:
    Persona( T id, QString nombre = "Sin nombre", int edad = 0 ) : id( id ), edad( edad ), nombre( nombre )  {
    }

    T getId()  {
        return id;
    }

    int getEdad()  {
        return this->edad;
    }

    void setEdad( int edad )  {
        this->edad = edad;
    }

    QString getNombre()  {
        return this->nombre;
    }

    void operator++(int) { this->edad = this->edad + 1; }

};


class Cliente : public Persona< int >  {
private:
    int cantDolares;

public:
    Cliente() : Persona( 1001 ), cantDolares( 10 )  {
    }

    int getSaldo()  {
        return this->cantDolares;
    }
};

// Se puede instanciar con:    Cliente cliente;



struct Credencial  {
    int dni;
    long long cuil;
};


struct SeguroSocial  {
    int numero;
    QString nombre;
};



int main( int, char ** )  {
    Credencial credencial1;
    credencial1.dni = 44123456;
    credencial1.cuil = 20441234562;

    Persona< Credencial > carlos( credencial1, "Carlos", 23 );

    qDebug() << carlos.getNombre() << "tiene" << carlos.getEdad() << "de edad";

    carlos++;

    qDebug() << carlos.getNombre() << "ahora tiene" << carlos.getEdad() << "de edad";

    return 0;
}


