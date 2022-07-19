#ifndef SUBLIME_H
#define SUBLIME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Sublime; }
QT_END_NAMESPACE

class Sublime : public QMainWindow
{
    Q_OBJECT

public:
    enum Color {CLASSIC, DARK};
    Sublime(Color, QWidget *parent = nullptr);
    ~Sublime();

private:
    Ui::Sublime *ui;

private slots:
    void slot_guardar();
};
#endif // SUBLIME_H
