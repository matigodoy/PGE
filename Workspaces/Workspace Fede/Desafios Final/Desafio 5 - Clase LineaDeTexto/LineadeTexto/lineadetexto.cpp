#include "lineadetexto.h"
#include <QKeyEvent>

LineaDeTexto::LineaDeTexto(QWidget * parent) : QLineEdit(parent), tipo(SIN_RESTRICCION)
{
  this->installEventFilter(this);
}


LineaDeTexto::LineaDeTexto(const LineaDeTexto &linea)
{
    this->setText(linea.text());
}

LineaDeTexto LineaDeTexto::operator=(const LineaDeTexto &linea)
{
    this->setText(linea.text());
    return *this;
}

bool LineaDeTexto::eventFilter(QObject *, QEvent *e)
{
    if(e->type() == QEvent::KeyPress && tipo == SOLO_NUMERO) {
        QKeyEvent * QKeyEvent = static_cast<class QKeyEvent *>(e);
            switch (QKeyEvent->key()) {
            case Qt::Key_0:
            case Qt::Key_1:
            case Qt::Key_2:
            case Qt::Key_3:
            case Qt::Key_4:
            case Qt::Key_5:
            case Qt::Key_6:
            case Qt::Key_7:
            case Qt::Key_8:
            case Qt::Key_9:
                return false;
            }
            return true;
}
            return false;
}
