#include "cmdhistory.h"

class cmdHistoryData : public QSharedData
{
public:

};

cmdHistory::cmdHistory(QObject *parent) : QObject(parent), data(new cmdHistoryData)
{

}

cmdHistory::cmdHistory(const cmdHistory &rhs) : data(rhs.data)
{

}

cmdHistory &cmdHistory::operator=(const cmdHistory &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

cmdHistory::~cmdHistory()
{

}

