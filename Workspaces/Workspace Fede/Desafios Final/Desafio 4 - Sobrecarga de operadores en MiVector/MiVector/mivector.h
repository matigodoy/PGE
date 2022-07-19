#ifndef MIVECTOR_H
#define MIVECTOR_H

#include <QVector>

template< class T > class MiVector : private QVector< T >  {
public:
    MiVector() : QVector< T >()  {

    }

    T get( int i ) const {
        return this->at( i );
    }

    void add( T nuevo )  {
        this->push_back( nuevo );
    }

    int size()  {
        return QVector< T >::size();
    }

    void operator+(T nuevo){
        this->push_back( nuevo );
    }
    void operator*(int cantidad){
        while(cantidad > 0){
            this->push_back( this->last() );
            cantidad --;
        }
    }

};

#endif // MIVECTOR_H
