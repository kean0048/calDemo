#ifndef ICALCDISPLAY_H
#define ICALCDISPLAY_H

#include <QObject>
#include <QSharedDataPointer>

class icalcdisplayData;

//namespace ICalcDisplay
//{
    class icalcdisplay : public QObject
    {
        Q_OBJECT
    public:
        explicit icalcdisplay(QObject *parent = 0);
        icalcdisplay(const icalcdisplay &);
        icalcdisplay &operator=(const icalcdisplay &);
        ~icalcdisplay();

    signals:
        void sigToDispaly(void);

    public slots:
        void slotIInputOver(QString input, QString paraR);
        void slotIOutputOver(QString output, QString paraO);
    private:
        QSharedDataPointer<icalcdisplayData> data;

        int isDigitStr(QString src);
        int isOperator(QString src);
        int isDeleteWord(QString src);
        int isDecimal(QString src);
        int isNegative(QString src);
    };
//}

#endif // ICALCDISPLAY_H
