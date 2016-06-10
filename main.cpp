#include "okno.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);
    QApplication a(argc, argv);
    okno w;
    w.show();

    return a.exec();
}
