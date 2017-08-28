#include <QCoreApplication>
#include "singleton.h"

Singleton::GC Singleton::GC::gc;//

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton *pSingleton1 = Singleton::GetInstance();
    Singleton *pSingleton2 = Singleton::GetInstance();
    cout << (pSingleton1 == pSingleton2) << endl;

    return a.exec();
}
