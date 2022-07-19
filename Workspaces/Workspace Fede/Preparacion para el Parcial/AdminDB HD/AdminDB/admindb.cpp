#include "admindb.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant>
#include <QDebug>
#include <QCryptographicHash>

AdminDB * AdminDB::instancia = nullptr;

AdminDB::AdminDB( QObject * parent ) : QObject( parent )
{
    db = QSqlDatabase::addDatabase( "QSQLITE" );
}

AdminDB *AdminDB::getInstancia()
{
    if( instancia == nullptr )  {
        instancia = new AdminDB;
    }
    return instancia;
}

bool AdminDB::conectar( QString archivoSqlite )
{
    db.setDatabaseName( archivoSqlite );

    return db.open();
}

QSqlDatabase AdminDB::getDB()
{
    return db;
}

QStringList AdminDB::validarUsuario( QString usuario, QString clave, QString tabla )
{
    QStringList nombre_apellido;

    if ( ! db.isOpen() )  {
        qDebug() << "Base no conectada";
        return nombre_apellido;
    }

    QSqlQuery query( db );
    QString claveMd5 = QCryptographicHash::hash( clave.toUtf8(), QCryptographicHash::Md5 ).toHex();

    query.exec( "SELECT nombre, apellido FROM " + tabla + " WHERE usuario = '" + usuario +
                     "' AND clave = '" + claveMd5 + "'" );

    while( query.next() )  {
        QSqlRecord registro = query.record();

        nombre_apellido << registro.value( registro.indexOf( "nombre" ) ).toString();
        nombre_apellido.append( registro.value( registro.indexOf( "apellido" ) ).toString() );
    }

    return nombre_apellido;
}

void AdminDB::mostrarTabla( QString tabla )  {
    if ( this->isConnected() )  {
        QSqlQuery query( db );
        bool exito = query.exec( "SELECT * FROM " + tabla );

        if ( ! exito )
            qDebug() << "La consulta no trajo registros";

        while( query.next() )  {
            QSqlRecord registro = query.record();  // Devuelve un objeto que maneja un registro (linea, row)
            int campos = registro.count();  // Devuleve la cantidad de campos de este registro

            QString informacion;  // En este QString se va armando la cadena para mostrar cada registro
            for ( int i = 0 ; i < campos ; i++ )  {
                informacion += registro.fieldName( i ) + ":";  // Devuelve el nombre del campo
                informacion += registro.value( i ).toString() + " - ";
            }
            qDebug() << informacion;
        }
    }
    else
        qDebug() << "No se encuentra conectado a la base";
}

bool AdminDB::isConnected()  {
    return db.isOpen();
}

QVector<QStringList> AdminDB::select(QString comando)
{
    QVector<QStringList> vector;
    if ( ! db.isOpen() )
        return vector;

    QSqlQuery * query = new QSqlQuery( db );
    query->exec( comando );

    while( query->next() )  {
        QStringList datosPersonales;
        QSqlRecord registro = query->record();  // Devuelve un objeto que maneja un registro (linea, row)
        int campos = registro.count();  // Devuleve la cantidad de campos de este registro
        for ( int i = 0 ; i < campos ; i++ )  {
            datosPersonales.append(registro.fieldName( i ) + ": ");  // Devuelve el nombre del campo
            datosPersonales.append(registro.value( i ).toString() + " - ");
        }
        vector.append(datosPersonales);
    }
    return vector;
}
