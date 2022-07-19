#ifndef MIVECTOR_H
#define MIVECTOR_H

#include <QVector>

template <class UNDEFINED> class MiVector : private QVector<UNDEFINED>{
public:
    MiVector():QVector <UNDEFINED> (){}
    UNDEFINED get(int i){
        return this->at(i);
    }
    void add( UNDEFINED nuevo){
        this->push_back(nuevo);
    }
    int size(){
        return QVector<UNDEFINED>::size();
    }
};
#endif // MIVECTOR_H
