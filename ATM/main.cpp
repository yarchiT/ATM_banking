#include "initwindow.h"
#include <QApplication>
//#include "staticbanklib.h"
int main(int argc, char *argv[])
{
    //StaticBankLib bLib;
   // bLib.Test();
    QApplication a(argc, argv);
    InitWindow w;
    w.show();

    return a.exec();
}
