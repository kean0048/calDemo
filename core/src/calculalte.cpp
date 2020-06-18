#include "calculalte.h"


namespace calMode
{

    class calculalteData : public QSharedData
    {
    public:

    };

    calculalte::calculalte(QObject *parent) : QObject(parent), data(new calculalteData)
    {

    }

    calculalte::calculalte(const calculalte &rhs) : data(rhs.data)
    {

    }

    calculalte &calculalte::operator=(const calculalte &rhs)
    {
        if (this != &rhs)
            data.operator=(rhs.data);
        return *this;
    }

    calculalte::~calculalte()
    {

    }


    QString calculalte::add(QString adder, QString adderm, int uniq)         //加
    {
        //有效性检测
        //TODO...
        if(uniq != 10)
        {
            bool ok;
            adder = QString::number(adder.toInt(&ok, uniq));
            adderm = QString::number(adderm.toInt(&ok, uniq));
        }
        if(adder.contains(".", Qt::CaseSensitive) || adderm.contains(".", Qt::CaseSensitive))
        {
            double resultDou = adder.toDouble() + adderm.toDouble();
            QStringList list;
            list << adder << adderm;
            int precisionMax = getPrecision(list);

            return QString::number(resultDou, 'f', precisionMax+1);
        }
        else
        {
            int resultDou = adder.toInt() + adderm.toInt();
            return QString::number(resultDou);
        }
        return 0;   //NEVER RUN HERE
    }

    QString calculalte::subtract(QString para1, QString para2, int uniq)    //减
    {
        //有效性检测
        //TODO...
        if(uniq != 10)
        {
            bool ok;
            para1 = QString::number(para1.toInt(&ok, uniq));
            para2 = QString::number(para2.toInt(&ok, uniq));
        }
        if(para1.contains(".", Qt::CaseSensitive) || para2.contains(".", Qt::CaseSensitive))
        {
            double resultDou = para1.toDouble() - para2.toDouble();
            QStringList list;
            list << para1 << para2;
            int precisionMax = getPrecision(list);

            return QString::number(resultDou, 'f', precisionMax+1);
        }
        else
        {
            int resultDou = para1.toInt() - para2.toInt();
            return QString::number(resultDou);
        }
        return 0;   //NEVER RUN HERE
    }

    QString calculalte::multiply(QString para1, QString para2, int uniq)    //乘
    {
        //有效性检测
        //TODO...
        if(uniq != 10)
        {
            bool ok;
            para1 = QString::number(para1.toInt(&ok, uniq));
            para2 = QString::number(para2.toInt(&ok, uniq));
        }
        if(para1.contains(".", Qt::CaseSensitive) || para2.contains(".", Qt::CaseSensitive))
        {
            double resultDou = para1.toDouble() * para2.toDouble();
            QStringList list;
            list << para1 << para2;
            int precisionMax = getPrecision(list);

            return QString::number(resultDou, 'f', precisionMax+1);
        }
        else
        {
            int resultDou = para1.toInt() * para2.toInt();
            return QString::number(resultDou);
        }
        return 0;   //NEVER RUN HERE
    }

    QString calculalte::divide(QString para1, QString para2, int uniq)      //除
    {
        //有效性检测
        //TODO...
        if(uniq != 10)
        {
            bool ok;
            para1 = QString::number(para1.toInt(&ok, uniq));
            para2 = QString::number(para2.toInt(&ok, uniq));
        }
//        if(guiInputParaR.contains(".", Qt::CaseSensitive))
//        {
            double resultDou = para1.toDouble() / para2.toDouble();
            QStringList list;
            list << para1 << para2;
            int precisionMax = getPrecision(list);

            return QString::number(resultDou, 'f', precisionMax+2);
//        }
//        else
//        {
//            int resultDou = para1.toInt() / para2.toInt();
//            return QString::number(resultDou);
//        }
//        return 0;   //NEVER RUN HERE
    }

    QString calculalte::doMod(QString, QString, int uniq)       //求余
    {

    }

    QString calculalte::doRoundNumbers(QString, QString, int uniq)      //求整
    {

    }

    QString calculalte::doShiftLogical(QString, int type)      //算术移动
    {

    }

    QString calculalte::doShiftArithmetic(QString, int type)   //逻辑移动
    {

    }

    int calculalte::getPrecision(QStringList list)
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



}
