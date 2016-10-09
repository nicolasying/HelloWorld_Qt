#include "hellodialog.h"
#include <QApplication>
#include <QIcon>
#include <QString>

int main(int argc, char *argv[])
{
    QString icon_file("myico.icns");
    QIcon icon;

    QApplication a(argc, argv);
    a.windowIcon();
    HelloDialog w;
    w.show();

    return a.exec();
}
