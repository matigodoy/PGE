#ifndef MIVECTOR_H
#define MIVECTOR_H


template <class T> class MiVector {
private:
    int maxSize;
    T * v;
    int actual;

public:
    MiVector(int maxSize = 10) : maxSize( maxSize ),
                                 v( new T[ maxSize ] ),
                                 actual( 0 ) { };
    bool add( T contenido );
    T get( int i ) const;
    int size() const;
    void ordenar();

};

template < class T > bool MiVector< T >::add( T contenido )  {
    if ( maxSize <= actual )
        return false;

    v[ actual ] = contenido;
    actual++;
    return true;
}

template < class T > T MiVector< T >::get( int i ) const {
    return v[ i ];
}

template < class T > int MiVector< T >::size() const {
    return actual;
}

template<class T> void MiVector<T>::ordenar() {
    int i;
    int j;
    T aux_elem;
    int movimientos;

    movimientos = 0;

    for (int i = 0; i < this->size() - 1; i++) {
        for (j = 1; j < this->size(); j++) {
            if (this->v[j] < this->v[j-1]) {   // si el elemento anterior es mayor, hacemos el cambio
                aux_elem = this->v[j];
                this->v[j] = this->v[j-1];
                this->v[j-1] = aux_elem;
                movimientos++;
            }
        }
    }
}

#endif // MIVECTOR_H
