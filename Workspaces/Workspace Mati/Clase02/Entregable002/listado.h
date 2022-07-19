#ifndef LISTADO_H
#define LISTADO_H

template < typename T > class Listado{
private:
    int cantidad;
    T * v;
    int libre;
public:
    Listado( int cantidad = 10 ) : cantidad( cantidad ), v( new T [ cantidad ] ), libre( 0 ) { }
    T get( int i ){ return v[ i ]; }
    bool add( T contenido );
    int getCantidad() { return this->cantidad; }
    int size() { if(libre != 0) return libre; else return 0;  }
};

template < class T > bool Listado< T >::add( T contenido ){
    if( cantidad <= libre) { return false; }
    v[ libre ] = contenido;
    libre++;
    return true;
}


#endif // LISTADO_H
