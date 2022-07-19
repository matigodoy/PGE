#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QVector>

class Manager : public QObject
{
    Q_OBJECT
public:
    static Manager * getMan();

    void iniciar();

private:
    static Manager * man;
    explicit Manager( QObject * parent = 0 );

private slots:
    void slot_ingreso( bool valido, QStringList usuario );
    void slot_mostrarVentana();

};

#endif // MANAGER_H
