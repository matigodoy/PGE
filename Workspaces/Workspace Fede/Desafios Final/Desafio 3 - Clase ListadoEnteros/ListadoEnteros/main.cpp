#include <QApplication>
#include <QDebug>
#include "listadoenteros.h"

int main(int argv, char ** argc){
    QApplication a(argv, argc);

    ListadoEnteros * l1 = new ListadoEnteros;

    l1->push_back(10);
    l1->push_back(20);
    l1->push_back(30);
    l1->push_back(40);
    l1->push_back(50);

    for(int i=0; i<l1->size(); i++){
        qDebug() << l1->at(i);
    }

    return 0;
}
