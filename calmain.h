#ifndef CALMAIN_H
#define CALMAIN_H

#include <QMainWindow>
#include "icalcdisplay.h"
#include "calculalte.h"
#include "gloable.h"

namespace Ui {
    class calMain;
}

using namespace calMode;

class calMain;

typedef void (calMain::*guiCallBackFunc)(QString, QString);

class calMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit calMain(QWidget *parent = 0);
    ~calMain();

    icalcdisplay *toDisplay;
    calMode::calculalte  *calculate;

signals:
    void slotInput(QString input, QString paraR);
    void slotOutput(QString output, QString paraR);

public slots:
    void slotToDisplay();
    void slotDigtalNumber();

    void slotFuncButton();
    void slotOperationsEqu();

    void slotSigalOperation();
private:
    Ui::calMain *ui;

    void funcDelete(QString src, QString keyValue);    //退格
    void funcClearWindows(QString src, QString keyValue);  //清屏
    void funcUintMarkSel(QString src, QString keyValue);    //进制选择
    void funcAngleMarkSel(QString src, QString keyValue);   //角度选择


    //界面控制部分
    void uintGuiSet(int uintMark);
    void hex(bool);
    void dec(bool);
    void otc(bool);
    void bin(bool);

    void toHex(QString res);
    void toBin(QString res);
    void toOtc(QString res);

    int getPrecision(QStringList);
    QString doOperations(QString opt, QString& src);
    std::vector<guiCallBackFunc> pCallBackFunc;
};

#endif // CALMAIN_H
