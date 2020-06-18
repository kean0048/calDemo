#ifndef CMDHISTORY_H
#define CMDHISTORY_H

#include <QObject>
#include <QSharedDataPointer>
#include <memory> // for std::shared_ptr
#include <vector>

struct HISTORYITEMVECTOR
{
    std::wstring expression;
    std::wstring result;
};

struct HISTORYITEM
{
    HISTORYITEMVECTOR historyItemVector;
};

class cmdHistoryData;

class cmdHistory : public QObject
{
    Q_OBJECT
public:
    explicit cmdHistory(QObject *parent = 0);
    cmdHistory(const cmdHistory &);
    cmdHistory &operator=(const cmdHistory &);
    ~cmdHistory();

    unsigned int AddToHistory();

    void ClearHistory();
    void GetHistory();
    unsigned int AddItem();
    bool RemoveItem(unsigned int uIdx);

    size_t MaxHistorySize() const
    {
        return m_maxHistorySize;
    }
signals:

public slots:

private:
    QSharedDataPointer<cmdHistoryData> data;

    std::vector<std::shared_ptr<HISTORYITEM>> m_historyItems;
    const size_t m_maxHistorySize = 100;
};

#endif // CMDHISTORY_H
