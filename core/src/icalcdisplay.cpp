#include "icalcdisplay.h"
#include "gloable.h"


#define inputPara(n)  paraR##n

class icalcdisplayData : public QSharedData
{
public:

};

//namespace ICalcDisplay
//{
    icalcdisplay::icalcdisplay(QObject *parent) : QObject(parent), data(new icalcdisplayData)
    {
    
    }
    
    icalcdisplay::icalcdisplay(const icalcdisplay &rhs) : data(rhs.data)
    {
    
    }
    
    icalcdisplay &icalcdisplay::operator=(const icalcdisplay &rhs)
    {
        if (this != &rhs)
            data.operator=(rhs.data);
        return *this;
    }
    
    icalcdisplay::~icalcdisplay()
    {
    
    }
    
    void icalcdisplay::slotIInputOver(QString input, QString addiSymbols)
    {
        if(isDeleteWord(addiSymbols) < 0)
        {
//            if(isNegative(input) < 0)
//                negativeMark = -1;
//            else
//                negativeMark = 0;

            guiInputParaR += input;

//            if(isDecimal(guiInputParaR) < 0)
//                decimalMark = -1;
//            else
//                decimalMark = 0;
        }
        else
        {
            if(guiInputParaR.length() > 0)
                guiInputParaR.chop(1);          //delete last char
        }

        emit sigToDispaly();
    }
    
    void icalcdisplay::slotIOutputOver(QString output, QString paraO)
    {

    }
    /***
      *判断一个字符串是否为纯数字
      */
    int icalcdisplay::isDigitStr(QString src)
    {
        QByteArray ba = src.toLatin1();//QString 转换为 char*
         const char *s = ba.data();

        while(*s && *s>='0' && *s<='9' || *s == '.') s++;

        if (*s)
        { //不是纯数字
            return -1;
        }
        else
        { //纯数字
            return 0;
        }
    }

    int icalcdisplay::isOperator(QString src)
    {
        QByteArray ba = src.toLatin1();//QString 转换为 char*
        const char *s = ba.data();
        if((*s == '+') || (*s == '-') || (*s == '*') || (*s == '/'))
        {
            return 0;
        }
        else
            return -1;
    }
    
    int icalcdisplay::isDeleteWord(QString src)
    {
        if(src == QString::fromLocal8Bit("fdelete"))
            return 0;
        else
            return -1;
    }
//}
    int icalcdisplay::isDecimal(QString src)
    {
        QByteArray ba = src.toLatin1();//QString 转换为 char*
         const char *s = ba.data();

        while(*s && *s == '.') s++;

        if (*s)
        { //不是纯数字
            return -1;
        }
        else
        { //纯数字
            return 0;
        }
    }

    int icalcdisplay::isNegative(QString src)
    {
        QByteArray ba = src.toLatin1();//QString 转换为 char*
         const char *s = ba.data();

        while(*s && *s == '-' || *s == '+') s++;

        if (*s)
        { //不是纯数字
            return -1;
        }
        else
        { //纯数字
            return 0;
        }
    }
