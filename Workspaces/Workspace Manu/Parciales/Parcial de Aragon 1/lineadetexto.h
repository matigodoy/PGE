#ifndef LINEADETEXTO_H
#define LINEADETEXTO_H

#include <QWidget>
#include <QLineEdit>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>

class QTreeWidget;
class QTimer;

class LineaDeTexto : public QLineEdit
{
    Q_OBJECT

public:

    enum Sugerencia {GOOGLE, LISTA};

    LineaDeTexto( QWidget *parent = nullptr );
    LineaDeTexto( const LineaDeTexto & lineaDeTexto ) : QLineEdit()
    {
        this->setText(lineaDeTexto.text());
    }
    ~LineaDeTexto();

    LineaDeTexto & operator=( const LineaDeTexto & lineaDeTexto )
    {
        this->setText(lineaDeTexto.text());
        return *this;
    }

    LineaDeTexto operator+( LineaDeTexto l)
    {
        LineaDeTexto aux;
        QString texto = this->text() + " " + l.text();
        aux.setText(texto);
        return aux;
    }

    void setLista(const QStringList &newLista);
    void setSugerencia(Sugerencia sugerencia);

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

#endif // LINEADETEXTO_H
