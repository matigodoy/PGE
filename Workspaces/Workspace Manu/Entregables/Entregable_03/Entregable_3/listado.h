#ifndef LISTADO_H
#define LISTADO_H

#include <QDebug>

template < class UNDEFINED > class Listado  {
private:
    int maxSize;
    UNDEFINED * v;
    int libre;

public:
    Listado( int maxSize = 10 );

    UNDEFINED get( int i ) const;
    int getMaxSize() const;
    int size() const;
    bool agregar( UNDEFINED contenido );
    void limpiar();
    bool pop_back();
    bool eliminar( int i );
    bool insertar( int i, UNDEFINED contenido );

    bool borrar_del_principio(int aux);
    bool borrar_del_final(int aux);

//    bool borrar_del_principio( int i );
//    bool borrar_del_final( int i );
};


template < class UNDEFINED > Listado< UNDEFINED >::Listado( int maxSize ) : maxSize( maxSize ),
                                                            v( new UNDEFINED[ maxSize ] ),
                                                            libre( 0 ){}

template < class UNDEFINED > int Listado< UNDEFINED >::getMaxSize() const {
    return this->maxSize;
}

template < class UNDEFINED > int Listado< UNDEFINED >::size() const {
    return libre;
}

template < class UNDEFINED > UNDEFINED Listado< UNDEFINED >::get( int i ) const {
    return v[ i ];
}

template < class UNDEFINED > bool Listado< UNDEFINED >::agregar( UNDEFINED contenido )  {
    if ( maxSize <= libre )
        return false;

    v[ libre ] = contenido;
    libre++;
    return true;
}

template < class UNDEFINED > void Listado< UNDEFINED >::limpiar()  {
    libre = 0;
}

template < class UNDEFINED > bool Listado< UNDEFINED >::pop_back()  {
    if ( libre > 0 )  {
        libre--;
        return true;
    }
    return false;
}

template < class UNDEFINED > bool Listado< UNDEFINED >::eliminar( int aux )  {
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

template < class UNDEFINED > bool Listado< UNDEFINED >::insertar( int aux, UNDEFINED contenido )  {
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

template<class UNDEFINED> bool Listado<UNDEFINED>::borrar_del_principio(int aux)
{
    for(int i = 0; i < aux ; i++){
        eliminar(0);
    }
}

template<class UNDEFINED>bool Listado<UNDEFINED>::borrar_del_final(int aux)
{
    for(int i = 0; i < aux ; i++){
        pop_back();
    }
}




//template<class UNDEFINED> bool Listado<UNDEFINED>::borrar_del_principio(int aux)
//{
//    for( int i = 0; i < aux ; i++){
//        eliminar(0);
//    }

//}

//template<class UNDEFINED> bool Listado<UNDEFINED>::borrar_del_final(int aux)
//{
//   for(int i = 0; i< aux; i++){
//       pop_back();
//   }
//   return true;
//}

#endif // LISTADO_H
