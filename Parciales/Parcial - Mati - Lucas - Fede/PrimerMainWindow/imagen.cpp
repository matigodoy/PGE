#include "imagen.h"
#include <QDebug>

Imagen::Imagen()
{

}

bool Imagen::operator>(const Imagen * imagen)
{
    int aux1 = this->width() * this->height();
    int aux2 = imagen->width() * imagen->height();
    if(aux1 > aux2){
        return true;
    }
    return false;
}

bool Imagen::operator<(const Imagen * imagen)
{
    int aux1 = this->width() * this->height();
    int aux2 = imagen->width() * imagen->height();
    if(aux1 < aux2){
        return true;
    }
    return false;
}
