#include "calmain.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/calculator.ico")); // 添加路径及icon名称

    calMain w;
    w.move((QApplication::desktop()->width()/2 - w.width())/2,
               (QApplication::desktop()->height() - w.height())/2);

    w.show();

    return a.exec();
}
