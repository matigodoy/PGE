#ifndef LISTADO_H
#define LISTADO_H

#include <QDebug>

template < class T > class Listado  {
private:
    int maxSize;
    T * v;
    int libre;

public:
    Listado( int maxSize = 10 );

    T get( int i ) const;
    int getMaxSize() const;
    int size() const;

    bool add( T contenido );

    void clear();
    bool pop_back();
    bool erase( int i );
    bool insert( int i, T contenido );

    Listado< T > operator+( const Listado< T > otro );
    void operator+( int cuantasNuevasCeldas );
};

template < class T > Listado< T >::Listado( int maxSize ) : maxSize( maxSize ),
                                                            v( new T[ maxSize ] ),
                                                            libre( 0 )
{

}

template < class T > int Listado< T >::getMaxSize() const {
    return this->maxSize;
}

template < class T > int Listado< T >::size() const {
    return libre;
}

template < class T > T Listado< T >::get( int i ) const {
    return v[ i ];
}

template < class T > bool Listado< T >::add( T contenido )  {
    if ( maxSize <= libre )
        return false;

    v[ libre ] = contenido;
    libre++;
    return true;
}


template < class T > void Listado< T >::clear()  {
    libre = 0;
}

/**
 *  Borra el ultimo elemento y en caso de borrarlo devuelve true.
 *  Si no hay elementos en el Listado devuelve false sin borrar nada.
 */
template < class T > bool Listado< T >::pop_back()  {
    if ( libre > 0 )  {
        libre--;
        return true;
    }
    return false;
}

template < class T > bool Listado< T >::erase( int aux )  {
    if ( aux > libre || aux < 0 )
        return false;
    else  {
        for( int i = aux ; i < libre ; i++ )  {
            v[ i ] = v[ i + 1 ];
        }
        libre--;
        return true;
    }
}

template < class T > bool Listado< T >::insert( int aux, T contenido )  {
    if ( aux > maxSize || aux < 0 || libre >= maxSize )  {
        qDebug() << "aux > maxSize || aux < 0 || libre >= maxSize";
        return false;
    }
    else if ( aux > libre && aux < maxSize )  {
        qDebug() << "if ( aux > libre && aux < maxSize )";
        this->add( contenido );
        return true;
    }
    else  {
        qDebug() << "else";
        for( int i = libre ; i > aux - 1 ; i-- )  {
            v[ i + 1 ] = v[ i ];
        }
        v[ aux ] = contenido;
        libre++;
        return true;
    }
}

template< class T > Listado< T > Listado< T >::operator+( const Listado< T > otro )  {
        T vAux[ this->size() + otro.size() ];

        int contador = 0;

        for ( ; contador < this->size() ; contador++ )
                vAux[ contador ] = this->get( contador );

        for ( int i = 0 ; contador < ( this->size() + otro.size() ) ; contador++, i++ )
                vAux[ contador ] = otro.get( i );

        Listado< T > res( this->getMaxSize() + otro.getMaxSize() );

        for ( int j = 0 ; j < contador ; j++ )
                res.add( vAux[ j ] );

        return res;
}

template< class T > void Listado< T >::operator+( int cuantasNuevasCeldas ) {
    T * vAux = new T[this->maxSize + cuantasNuevasCeldas];
    for(int i=0; i<this->libre ; i++){
        vAux[i] = v[i];
    }
    this->v = vAux;
    maxSize = this->maxSize + cuantasNuevasCeldas;
}

#endif // LISTADO_H