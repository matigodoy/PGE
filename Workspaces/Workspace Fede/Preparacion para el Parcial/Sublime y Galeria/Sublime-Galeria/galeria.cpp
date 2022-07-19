#include "galeria.h"
#include "ui_galeria.h"

Galeria::Galeria(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Galeria)
{
    ui->setupUi(this);
}

Galeria::~Galeria()
{
    delete ui;
}
