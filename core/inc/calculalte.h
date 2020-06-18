#ifndef CALCULALTE_H
#define CALCULALTE_H

#include <QObject>
#include <QSharedDataPointer>

#include "gloable.h"

namespace calMode
{
    class calculalteData;

    class calculalte : public QObject
    {
        Q_OBJECT
    public:
        explicit calculalte(QObject *parent = 0);
        calculalte(const calculalte &);
        calculalte &operator=(const calculalte &);
        ~calculalte();

        QString add(QString para1, QString para2, int uniq);         //加
        QString subtract(QString para1, QString para2, int uniq);    //减
        QString multiply(QString para1, QString para2, int uniq);    //乘
        QString divide(QString para1, QString para2, int uniq);      //除

        QString doMod(QString para1, QString para2, int uniq);       //求余
        QString doRoundNumbers(QString para1, QString para2, int uniq);      //求整
        QString doShiftLogical(QString para1, int type);      //算术移动
        QString doShiftArithmetic(QString para1, int type);   //逻辑移动

    signals:
        int sigResluts();

    public slots:

    private:
        QSharedDataPointer<calculalteData> data;

        int getPrecision(QStringList list);     //获取精度最大值
    };


}
#endif // CALCULALTE_H
