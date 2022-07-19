#ifndef LINEADETEXTO_H
#define LINEADETEXTO_H

#include <QLineEdit>

class LineaDeTexto : public QLineEdit  {
    Q_OBJECT

public:
    enum Tipo {SIN_RESTRICCION, SOLO_NUMERO};
    LineaDeTexto( QWidget * parent = nullptr );

    LineaDeTexto( const LineaDeTexto & lineaDeTexto );

    LineaDeTexto &operator=( const LineaDeTexto & lineaDeTexto );

    void setTipo(Tipo tipo){
        this->tipo = tipo;
    }

private:
    Tipo tipo;

protected:
    bool eventFilter( QObject*, QEvent * e);

};

#endif // LINEADETEXTO_H
