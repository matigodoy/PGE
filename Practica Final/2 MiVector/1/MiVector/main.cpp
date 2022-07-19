#include "mivector.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MiVector<int> * v1 = new MiVector<int>;
    v1->add(1);
    v1->add(3);
    v1->add(5);
    v1->add(7);
    v1->add(56);

    for (int i = 0; i< v1->size() ;i++ ) {
        qDebug() << v1->get(i);
    }
    return 0;
}
