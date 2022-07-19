#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT
private:
    QWidget * ventana;

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;

private slots:
    void slot_validar();
};
#endif // LOGIN_H
