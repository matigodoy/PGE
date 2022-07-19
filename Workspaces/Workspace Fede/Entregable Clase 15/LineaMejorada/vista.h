#ifndef VISTA_H
#define VISTA_H

#include <QWidget>

class QTreeWidget;
class QTimer;

namespace Ui {
class Vista;
}

class Vista : public QWidget  {
    Q_OBJECT

public:
    explicit Vista( QWidget * parent = nullptr );
    ~Vista();

    void setLista(const QStringList &newLista);

private:
    Ui::Vista * ui;
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

#endif // VISTA_H
