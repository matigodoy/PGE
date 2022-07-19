#ifndef MIVECTOR_H
#define MIVECTOR_H

#include <QVector>
#include <QDebug>
#include <iostream>

template <class T> class MiVector : public QVector<T> {
private:
    T * v;

public:
    MiVector(int maxSize = 10) : v( new T[ maxSize ] ){ };
    void ordenar();
};

template<class T> void MiVector<T>::ordenar() {
    T aux_elem;
    int movimientos;

    movimientos = 0;

    for (int i = 0; i < this->size() - 1; i++) {
        for (int j = 1; j < this->size(); j++) {
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
