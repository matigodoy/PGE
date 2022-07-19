#ifndef LISTADO_H
#define LISTADO_H

#include "excepciones.h"

template< class T > class Listado  {
private:
    int cantidad;
    int libre;
    T * v;

public:
    Listado( int cantidad = 19 ) : cantidad( cantidad ), libre( 0 ), v( new T[ cantidad ] )  {

    }

    T get( int i )  {
        if(i >= libre){
            ExcFueraRango excepcion("Fuera de rango", i);
            throw excepcion;
        }
        return v[ i ];
    }

    int size()  {
        return libre;
    }

    int getCantidad()  {
        return cantidad;
    }

    bool add( T nuevo );
};

template< class T > bool Listado< T >::add( T nuevo )  {
    if ( libre < cantidad )  {
        v[ libre ] = nuevo;
        libre++;
        return true;
    }
    return false;
}

#endif // LISTADO_H
