#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H

#include <QString>

class ExcFueraRango{
private:
    QString mensaje;
    int index;

public:
    ExcFueraRango(QString mensaje, int index) : mensaje(mensaje), index(index){}
    const QString &getMensaje() const;
    void setMensaje(const QString &newMensaje);
    int getIndex() const;
    void setIndex(int newIndex);
};

inline int ExcFueraRango::getIndex() const
{
    return index;
}

inline void ExcFueraRango::setIndex(int newIndex)
{
    index = newIndex;
}

inline const QString &ExcFueraRango::getMensaje() const
{
    return mensaje;
}

inline void ExcFueraRango::setMensaje(const QString &newMensaje)
{
    mensaje = newMensaje;
}

#endif // EXCEPCIONES_H
