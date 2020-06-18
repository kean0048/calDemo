#ifndef RESULTDATA_H
#define RESULTDATA_H

#include <QObject>
#include <QSharedDataPointer>

class resultDataData;


class resultData : public QObject
{
    Q_OBJECT
public:
    explicit resultData(QObject *parent = 0);
    resultData(const resultData &);
    resultData &operator=(const resultData &);
    ~resultData();

signals:
    void sigResults();

public slots:
    void dealWithRam(int type);

private:
    QSharedDataPointer<resultDataData> data;

    void storeRam();        //存储
    void fatchRam();        //取存
    void addStoreRam();     //累存
    void multiStoreRam();   //积存

    void clearRam();        //清存
    void allClear();        //全清
    void clearShow();       //清屏
    void delRam();          //退格
};

#endif // RESULTDATA_H
