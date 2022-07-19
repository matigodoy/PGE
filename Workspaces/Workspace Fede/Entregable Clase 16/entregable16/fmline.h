#ifndef LINEADETEXTO_H
#define LINEADETEXTO_H

#include <QWidget>
#include <QLineEdit>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>

class QTreeWidget;
class QTimer;

class FMLine : public QLineEdit {
    Q_OBJECT
public:
    enum Sugerencia {GOOGLE, NADA, LISTA};

    FMLine(QWidget * parent = nullptr);

    FMLine(const FMLine & LineaDeTexto) {
        this->setText(LineaDeTexto.text());
    }

    FMLine & operator=(const FMLine & otro) {
        this->setText(otro.text());
        return *this;
    }

    FMLine operator+(FMLine otro) {
        FMLine aux;
        aux.setText(this->text() + " " + otro.text());
        return aux;
    }

    void setLista(const QStringList &newLista);
    void sugerirCon(Sugerencia sugerencia);

private:
    QTreeWidget * popup;
    QTimer * timer;
    QStringList lista;  // La base de datos para recomendar

    int cantidadMaximaDeRecomendaciones;

    Sugerencia sugerencia;

    QNetworkAccessManager * manager;

    void crearPopup();  // Definir el aspecto del popup
    bool eventFilter( QObject * obj, QEvent * ev );  // Método virtual de QObject
    void completarPopup( QVector< QStringList > vector );  // Al ir escribiendo, vamos agregando item al popup

private slots:
    void slot_sugerencia();
    void slot_completarLineEdit();  // Luego de elegir una sugerencia, se completa el lineedit
    void slot_descargaFinalizada( QNetworkReply * reply );
};


#endif // LINEADETEXTO_H|
