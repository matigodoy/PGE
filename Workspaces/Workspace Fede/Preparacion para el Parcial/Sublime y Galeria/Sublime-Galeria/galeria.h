#ifndef GALERIA_H
#define GALERIA_H

#include <QMainWindow>

namespace Ui {
class Galeria;
}

class Galeria : public QMainWindow
{
    Q_OBJECT

public:
    explicit Galeria(QWidget *parent = nullptr);
    ~Galeria();

private:
    Ui::Galeria *ui;
};

#endif // GALERIA_H
