#include "frmmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //设置不应用操作系统设置比如字体
    //QApplication::setDesktopSettingsAware(false);

    QApplication a(argc, argv);
    frmMain w;
    w.show();
    return a.exec();
}
