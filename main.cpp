#include <QCoreApplication>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "hello";
    return a.exec();
}
