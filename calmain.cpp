#include "calmain.h"
#include "ui_calmain.h"

#include "QFile"

calMain::calMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calMain)
{
    ui->setupUi(this);

    //GUI BY CCS
    QFile qssfile(":/style/style.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);

    hex(true);
    //QStatusBar
    QLabel *per1 = new QLabel("©2020-2025 RenHai. All Rights Reserved.", this);
    statusBar()->addPermanentWidget(per1); //现实永久信息

    toDisplay = new icalcdisplay();
    connect(toDisplay, &icalcdisplay::sigToDispaly, this, &calMain::slotToDisplay);
    connect(this, SIGNAL(slotInput(QString, QString)), toDisplay, SLOT(slotIInputOver(QString, QString)));
    connect(this, SIGNAL(slotOutput(QString, QString)), toDisplay, SLOT(slotIOutputOver(QString, QString)));

//     pCallBackFunc.push_back(&calMain::slotInput);
    pCallBackFunc.push_back(&calMain::funcDelete);
    pCallBackFunc.push_back(&calMain::funcClearWindows);
    pCallBackFunc.push_back(&calMain::funcUintMarkSel);
    pCallBackFunc.push_back(&calMain::funcAngleMarkSel);

    calculate = new calculalte();

    ui->label_bin->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_dec->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_hex->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_otc->setTextInteractionFlags(Qt::TextSelectableByMouse);
}

calMain::~calMain()
{
    delete ui;
}


void calMain::slotToDisplay()
{
    ui->textEdit_Result->moveCursor(QTextCursor::End);
    ui->textEdit_Result->clear();
    ui->textEdit_Result->insertPlainText(guiInputParaR);
}

void calMain::slotDigtalNumber()
{
    QString text = ((QPushButton*)sender())->text();
    emit slotInput(text, tr("digit"));
}

void calMain::slotFuncButton()
{
    bool existSymbal = false;
    QString text = ((QPushButton*)sender())->text();
    for(int i = 0;i<nameMax; i++)
    {
        if(text.contains(guiFuncNanme[i], Qt::CaseSensitive))
        {
            (this->*pCallBackFunc[i])(text, guiEngName[i]);
            existSymbal = false;
            break;
        }
        else
            existSymbal = true;
    }
    if(existSymbal)
        emit this->slotInput(text, "operation");
}

QString calMain::doOperations(QString opt, QString& src)
{
    QString firstReslut;
    QStringList temp = src.split(opt);

    QStringList lefttemp = temp[0].split(QRegExp("[-+×÷]"), QString::SkipEmptyParts);//QString字符串分割函数
    QStringList righttemp = temp[1].split(QRegExp("[-+×÷]"), QString::SkipEmptyParts);//QString字符串分割函数
    if(opt.compare("×") == 0)
        firstReslut = calculate->multiply(lefttemp[lefttemp.size()-1], righttemp[0], uintMark);
    else if(opt.compare("÷") == 0)
        firstReslut = calculate->divide(lefttemp[lefttemp.size()-1], righttemp[0], uintMark);
    else if(opt.compare("+") == 0)
        firstReslut = calculate->add(lefttemp[lefttemp.size()-1], righttemp[0], uintMark);
    else if(opt.compare("-") == 0)
        firstReslut = calculate->subtract(lefttemp[lefttemp.size()-1], righttemp[0], uintMark);
    else
        firstReslut = "error";

    QString tempNew = lefttemp[lefttemp.size()-1]+opt+righttemp[0];
    src.replace(tempNew, firstReslut);

    return firstReslut;
}

void calMain::slotOperationsEqu()
{
    if(guiInputParaR.isEmpty())
        return;

    QString firstReslut;
    QStringList list;
    list = guiInputParaR.split(QRegExp("[-+×÷]"), QString::SkipEmptyParts);//QString字符串分割函数
    if(list.size() <= 1)
        firstReslut += "error";
    QString tempGuiInputParaR = guiInputParaR;


    for(int i = 0; i < list.size()-1; i++)
    {
        //四则混合运算法则
        if(tempGuiInputParaR.contains("×", Qt::CaseSensitive) || tempGuiInputParaR.contains("%", Qt::CaseSensitive))  //乘,取余
        {
            firstReslut = doOperations("×", tempGuiInputParaR);
        }
        else
        {
            if(tempGuiInputParaR.contains("÷", Qt::CaseSensitive) || tempGuiInputParaR.contains("/", Qt::CaseSensitive))  //除，取整
            {
                firstReslut = doOperations("÷", tempGuiInputParaR);
            }
            else
            {
                if(tempGuiInputParaR.contains("+", Qt::CaseSensitive) || tempGuiInputParaR.contains("&", Qt::CaseSensitive))  //加，与
                {
                    firstReslut = doOperations("+", tempGuiInputParaR);
                }
                else    //减 或
                {
                    firstReslut = doOperations("-", tempGuiInputParaR);
                }
            }
        }
    }

    ui->textEdit_Result->insertPlainText("=");
    ui->textEdit_Result->insertPlainText(firstReslut);

    ui->label_dec->setText(firstReslut);
    toHex(firstReslut);
    toOtc(firstReslut);
    toBin(firstReslut);


    guiInputParaR.clear();
}

void calMain::funcDelete(QString src, QString keyValue)
{
    emit this->slotInput(src, keyValue);
}

void calMain::funcClearWindows(QString src, QString keyValue)
{
    guiInputParaR.clear();
    ui->textEdit_Result->clear();
    ui->label_hex->clear();
    ui->label_otc->clear();
    ui->label_dec->clear();
    ui->label_bin->clear();
}

void calMain::funcUintMarkSel(QString src, QString keyValue)
{
    if(src == QString::fromLocal8Bit("十六进制"))
    {
        uintMark = 16;
        ui->label_hex->setFocus();
    }
    else if(src == QString::fromLocal8Bit("十进制"))
        uintMark = 10;
    else if(src == QString::fromLocal8Bit("八进制"))
        uintMark = 8;
    else if(src == QString::fromLocal8Bit("二进制"))
        uintMark = 2;

    uintGuiSet(uintMark);
}

void calMain::funcAngleMarkSel(QString src, QString keyValue)
{
    if(src == QString::fromLocal8Bit("角度制"))
        angleMark = 1;
    else if(src == QString::fromLocal8Bit("弧度制"))
        angleMark = 0;
}

void calMain::uintGuiSet(int uintMark)
{
    if(uintMark == 16)
    {
        hex(true);
    }
    else if(uintMark == 10)
    {
        dec(true);
    }
    else if(uintMark == 8)
    {
        otc(true);
    }
    else
    {
        bin(true);
    }
}

void calMain::hex(bool bflag)
{
    if(bflag)
    {
        dec(true);
        ui->pushButton_A->setEnabled(true);
        ui->pushButton_B->setEnabled(true);
        ui->pushButton_C->setEnabled(true);
        ui->pushButton_D->setEnabled(true);
        ui->pushButton_E->setEnabled(true);
        ui->pushButton_F->setEnabled(true);
        ui->pushButton_piont->setEnabled(false);
    }
    else
    {
        ui->pushButton_A->setEnabled(false);
        ui->pushButton_B->setEnabled(false);
        ui->pushButton_C->setEnabled(false);
        ui->pushButton_D->setEnabled(false);
        ui->pushButton_E->setEnabled(false);
        ui->pushButton_F->setEnabled(false);
        ui->pushButton_piont->setEnabled(true);
    }
    ui->pushButton_PI->setEnabled(false);
    ui->pushButton_ER->setEnabled(false);
    ui->pushButton_DMS->setEnabled(false);
    ui->pushButton_SIN->setEnabled(false);
    ui->pushButton_COS->setEnabled(false);
    ui->pushButton_TAN->setEnabled(false);
}

void calMain::dec(bool bflag)
{
    if(bflag)
    {
        hex(false);
        bin(false);
        otc(false);
        ui->pushButton_piont->setEnabled(true);
        ui->pushButton_PI->setEnabled(true);
        ui->pushButton_ER->setEnabled(true);
        ui->pushButton_DMS->setEnabled(true);
        ui->pushButton_SIN->setEnabled(true);
        ui->pushButton_COS->setEnabled(true);
        ui->pushButton_TAN->setEnabled(true);
    }
}

void calMain::otc(bool bflag)
{
    if(bflag)
    {
        hex(false);
        bin(false);
        ui->pushButton_number_9->setEnabled(false);
        ui->pushButton_number_8->setEnabled(false);
        ui->pushButton_piont->setEnabled(false);
    }
    else
    {
        ui->pushButton_number_9->setEnabled(true);
        ui->pushButton_number_8->setEnabled(true);
        ui->pushButton_piont->setEnabled(true);
    }
}

void calMain::bin(bool bflag)
{
    if(bflag)
    {
        hex(false);
        ui->pushButton_number_9->setEnabled(false);
        ui->pushButton_number_8->setEnabled(false);
        ui->pushButton_number_7->setEnabled(false);
        ui->pushButton_number_6->setEnabled(false);
        ui->pushButton_number_5->setEnabled(false);
        ui->pushButton_number_4->setEnabled(false);
        ui->pushButton_number_3->setEnabled(false);
        ui->pushButton_number_2->setEnabled(false);
        ui->pushButton_piont->setEnabled(false);
    }
    else
    {
        ui->pushButton_number_9->setEnabled(true);
        ui->pushButton_number_8->setEnabled(true);
        ui->pushButton_number_7->setEnabled(true);
        ui->pushButton_number_6->setEnabled(true);
        ui->pushButton_number_5->setEnabled(true);
        ui->pushButton_number_4->setEnabled(true);
        ui->pushButton_number_3->setEnabled(true);
        ui->pushButton_number_2->setEnabled(true);
        ui->pushButton_piont->setEnabled(true);
    }
}

int calMain::getPrecision(QStringList list)
{
    if(list.size() <= 0)
        return -1;
    int max = 1;

    for(int i = 0; i < list.size(); i++)
    {
        if(list[i].contains(".", Qt::CaseSensitive))
        {
            QString str = list[i].section('.', -1);
            if(str.length() > max)
                max = str.length();
        }
    }
    return max;
}

void calMain::toHex(QString res)
{
    bool ok;
    int hex = res.toInt(&ok,10);
    ui->label_hex->setText(QString("%1").arg(hex, 4, 16, QLatin1Char('0')));
}

void calMain::toBin(QString res)
{
    bool ok;
    int bin = res.toInt(&ok,10);
    ui->label_bin->setText(QString("%1").arg(bin, 4, 2, QLatin1Char('0')));
}

void calMain::toOtc(QString res)
{
    bool ok;
    int otc = res.toInt(&ok,10);
    ui->label_otc->setText(QString("%1").arg(otc, 3, 8, QLatin1Char('0')));
}


void calMain::slotSigalOperation()
{
    bool ok;
    QString firstReslut;
    QString text = ((QPushButton*)sender())->text();
    if(text.contains("左移", Qt::CaseSensitive))
    {
        int leftm = guiInputParaR.toInt(&ok, uintMark);
        firstReslut = QString::number(leftm*uintMark);
    }
    else
    {
        int leftm = guiInputParaR.toInt(&ok, uintMark);
        firstReslut = QString::number(~leftm);
    }

    ui->label_dec->setText(firstReslut);
    toHex(firstReslut);
    toOtc(firstReslut);
    toBin(firstReslut);
    guiInputParaR.clear();
    ui->textEdit_Result->clear();
}
