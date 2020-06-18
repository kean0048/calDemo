#include "resultdata.h"

class resultDataData : public QSharedData
{
public:

};

resultData::resultData(QObject *parent) : QObject(parent), data(new resultDataData)
{

}

resultData::resultData(const resultData &rhs) : data(rhs.data)
{

}

resultData &resultData::operator=(const resultData &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

resultData::~resultData()
{

}

void resultData::dealWithRam(int type)
{

}
