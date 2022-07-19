#ifndef ADMINDB_H
#define ADMINDB_H

#include <QObject>
#include <QSqlDatabase>

class AdminDB : public QObject
{
    Q_OBJECT
public:
    static AdminDB * getInstancia();

    bool conectar( QString archivoSqlite );

    QSqlDatabase getDB();

    QStringList validarUsuario( QString usuario, QString claveMd5, QString tabla );

    void mostrarTabla( QString tabla );

    bool isConnected();

    QVector<QStringList> select(QString comando);

private:
    static AdminDB * instancia;
    QSqlDatabase db;
    explicit AdminDB(QObject *parent = nullptr);

signals:

};

#endif // ADMINDB_H
