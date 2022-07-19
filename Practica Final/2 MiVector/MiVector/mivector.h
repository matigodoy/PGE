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

};

#endif // MIVECTOR_H
