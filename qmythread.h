#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QThread>

class QMyThread : public QThread
{
    Q_OBJECT
    QString m_strNessage;
    volatile bool m_fStopped;
public:
    explicit QMyThread(QObject *parent = nullptr);
    void setMessage(const QString& msg)
    {
        m_strNessage = msg;
    }

    void stop()
    {
        m_fStopped = true;
    }

    void startThread()
    {
        m_fStopped = false;
        start();
    }

protected:
    void run();
};

#endif // QMYTHREAD_H
