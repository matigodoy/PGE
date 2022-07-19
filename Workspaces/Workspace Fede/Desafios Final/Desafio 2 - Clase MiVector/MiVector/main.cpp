#include <QApplication>
#include <QDebug>
#include "mivector.h"

int main(int argv, char**argc){
    QApplication(argv, argc);

    MiVector<int> * v1 = new MiVector<int>;

    v1->add(10);
    v1->add(20);
    v1->add(30);
    v1->add(40);
    v1->add(50);

    for(int i=0; i<v1->size(); i++){
        qDebug() << v1->get(i);
    }

    return  0;;
}
