#ifndef MIVECTOR_H
#define MIVECTOR_H

#include <QVector>
#include <QDebug>

template <class UNDEFINED> class MiVector : public QVector<UNDEFINED> {
private:
    int maxSize;
    UNDEFINED * v;
    int actual;

public:
    MiVector(int maxSize = 10) : maxSize( maxSize ),
                                 v( new UNDEFINED[ maxSize ] ),
                                 actual( 0 ) { };
    bool add( UNDEFINED contenido );
    UNDEFINED get( int i ) const;
    int size() const;
    void ordenar();

};

template < class UNDEFINED > bool MiVector< UNDEFINED >::add( UNDEFINED contenido )  {
    if ( maxSize <= actual )
        return false;

    v[ actual ] = contenido;
    actual++;
    return true;
}

template < class UNDEFINED > UNDEFINED MiVector< UNDEFINED >::get( int i ) const {
    return v[ i ];
}

template < class UNDEFINED > int MiVector< UNDEFINED >::size() const {
    return actual;
}

template<class UNDEFINED> void MiVector<UNDEFINED>::ordenar() {
    int i;
    int j;
    UNDEFINED aux_elem;
    int movimientos;

    movimientos = 0;

    for (int i = 0; i < this->size() - 1; i++) {
        for (j = 1; j < this->size(); j++) {
            if (this->v[j] < this->v[j-1]) {
                aux_elem = this->v[j];
                this->v[j] = this->v[j-1];
                this->v[j-1] = aux_elem;
                movimientos++;
            }
        }
    }
}

#endif // MIVECTOR_H
