#ifndef ARCHIVADOR_H
#define ARCHIVADOR_H

#include <QString>
#include <QFile>

class Archivador {
private:
    Archivador();
    static Archivador * instancia;
    QFile archivo;

public:
    ~Archivador();
    static Archivador * getInstancia();
    void loguear(QString evento, QString descripcion);
};

#endif // ARCHIVADOR_H
