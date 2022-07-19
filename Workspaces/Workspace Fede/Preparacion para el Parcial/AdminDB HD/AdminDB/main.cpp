#include <QDebug>
#include "admindb.h"

int main(){
    //Se conecta a la base de datos
    if ( ! AdminDB::getInstancia()->conectar( "../db/usuarios.sqlite" ) )  {
        qDebug() << "Error de conexion a la base, No se pudo conectar";
    }

    //validamos el usuario con los datos
    QStringList persona = AdminDB::getInstancia()->validarUsuario("admin","1234","usuarios");

    qDebug() << "admin" << "1234" << persona;

    //si el QStringList es mayor a 0 significa que tiene 1 persona validada. Si no significa que no se valido el usuario
    if ( persona.size() > 0 )  {
        qDebug() << "Usuario valido";
    }
    else  {
        qDebug() << "Usuario no valido";
    }

    AdminDB::getInstancia()->mostrarTabla("usuarios");


    QVector<QStringList> vector = AdminDB::getInstancia()->select("SELECT nombre, apellido FROM usuarios");
    if( vector.isEmpty() ){
        qDebug() << "Error, Instruccion no encontrada";
    }
    else{
        for(int i=0; i<vector.count();i++){
            QString valores;
            //qDebug() << vector[i];
            for(int j=0; j<vector[i].count(); j++){
                valores.append(vector[i][j]);
            }
            qDebug() << valores;
        }
    }

    AdminDB juan = new AdminDB();
}
