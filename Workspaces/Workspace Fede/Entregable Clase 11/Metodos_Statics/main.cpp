#include <QDebug>
#include <QCryptographicHash>
#include <QString>
#include <QTime>
#include <QDate>

int main(){
    QString clave = "Clave para Hash";
    QString claveMd5 = QCryptographicHash::hash( clave.toUtf8(), QCryptographicHash::Md5 ).toHex();
    qDebug() << "Clave:" << clave << "- ClaveMd5:" << claveMd5;

    int numero = 3;
    QString numeroString = QString::number(numero);
    qDebug() << "Numero:" << numero << "- numeroString:" << numeroString;

    qDebug() << "Dia:" << QDate::currentDate().toString() << "- Hora:" << QTime::currentTime().toString();

    /*
    ----- FUNCIONES STATICS: -----
        QString::number(numero);
        QCryptographicHash::hash();
        QImage::fromData( reply->readAll() );
        db = QSqlDatabase::addDatabase( "QSQLITE" );
        QFileDialog::getOpenFileName()
        QDate::currentDate();
        QTime::currentTime();
    */
    return 0;
}
