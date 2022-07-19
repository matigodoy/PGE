#include "sublime.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sublime w(Sublime::DARK);
    w.show();
    return a.exec();
}
