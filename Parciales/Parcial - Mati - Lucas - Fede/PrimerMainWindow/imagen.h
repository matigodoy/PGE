#ifndef IMAGEN_H
#define IMAGEN_H

#include <QImage>

class Imagen : public QImage {
public:
    Imagen();

    bool operator>( const Imagen * imagen );
    bool operator<( const Imagen * imagen );
};

#endif // IMAGEN_H
