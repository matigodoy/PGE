#include "archivador.h"
#include <QDateTime>
#include <QDebug>

Archivador * Archivador::instancia = nullptr;

Archivador::Archivador() : archivo(QFile("../archivos/logs.txt"))
{
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        qDebug() << "- Error, unable to open" << "outputFilename" << "for output";
    }
}

Archivador::~Archivador()
{
    archivo.close();
}

Archivador *Archivador::getInstancia()
{
    if( instancia == nullptr )  {
        instancia = new Archivador;
    }
    return instancia;
}

void Archivador::loguear(QString evento, QString descripcion)
{
    QString fecha = QDateTime::currentDateTime().toString("yyyy.MM.dd hh.mm.ss");
    QTextStream outStream(&archivo);
    outStream << evento << " | " << fecha << " | " << descripcion <<"\n";
}
