#ifndef LINEADETEXTO_H
#define LINEADETEXTO_H

#include<QLineEdit>

class LineaDeTexto : public QLineEdit {
public:

    LineaDeTexto(const char* texto = "") : QLineEdit( texto ){ }

    LineaDeTexto(const LineaDeTexto & LineaDeTexto) {
        this->setText(LineaDeTexto.text());
    }

    LineaDeTexto & operator=(const LineaDeTexto & otro) {
        this->setText(otro.text());
        return *this;
    }

    LineaDeTexto operator+(LineaDeTexto otro) {
        LineaDeTexto aux;
        aux.setText(this->text() + " " + otro.text());
        return aux;
    }
};

#endif // LINEADETEXTO_H
