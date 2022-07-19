#include <QString>
#include <QDebug>

template< class UNDEFINED > class Persona  {
private:
    UNDEFINED id;
    int edad;
    QString nombre;

public:
    Persona( UNDEFINED id, QString nombre = "Sin nombre", int edad = 0 ) : id( id ), edad( edad ), nombre( nombre )  {
    }

    UNDEFINED getId()  {
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

    void operator++(int){
        this->edad = this->edad + 1;
    }

};

//template<class UNDEFINED> void Persona<UNDEFINED>::operator++()
//{
//    this->edad = this->edad + 1;
//}



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
    Persona< int > juan( 36242 );

    Persona< QString > carlos( "Carlos" );

    Persona< float > jose( 3.14, "Jose" );

    Credencial credencial1;
    credencial1.dni = 44123456;
    credencial1.cuil = 20441234562;

    Persona< Credencial > lucas( credencial1, "Lucas", 23 );

    qDebug() << lucas.getNombre() << "tiene" << lucas.getEdad() << "de edad";

   lucas++;
   // lucas.operator++();
    //lucas.setEdad( lucas.getEdad() + 1 );

    qDebug() << lucas.getNombre() << "ahora tiene" << lucas.getEdad() << "de edad";

    return 0;
}




