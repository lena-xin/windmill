#include "drawer.h"
#include <QApplication>
#include "form.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Drawer w;
    Form w1;
    w.show();
    w1.show();

    return a.exec();
}
