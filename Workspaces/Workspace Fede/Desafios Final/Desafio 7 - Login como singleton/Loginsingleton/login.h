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
    Login(QWidget *parent = nullptr);
    static Login * instancia;

public:
    ~Login();
    static Login *getInstancia();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
