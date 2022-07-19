#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    //Login( const Login & login );

    bool operator>( const Login * login );
    bool operator<( const Login * login );

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
