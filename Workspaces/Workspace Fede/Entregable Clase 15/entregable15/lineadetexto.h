#ifndef LINEADETEXTO_H
#define LINEADETEXTO_H

#include<QWidget>
#include<QLineEdit>

class QTreeWidget;
class QTimer;

class LineaDeTexto : public QLineEdit {
    Q_OBJECT
public:

    LineaDeTexto(const char* texto = "");

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

    void setLista(const QStringList &newLista);

private:
    QTreeWidget * popup;
    QTimer * timer;
    QStringList lista;  // La base de datos para recomendar

    int cantidadMaximaDeRecomendaciones;

    void crearPopup();  // Definir el aspecto del popup
    bool eventFilter( QObject * obj, QEvent * ev );  // Método virtual de QObject
    void completarPopup( QVector< QStringList > vector );  // Al ir escribiendo, vamos agregando item al popup

private slots:
    void slot_sugerencia();
    void slot_completarLineEdit();  // Luego de elegir una sugerencia, se completa el lineedit

};


#endif // LINEADETEXTO_H|
