#include "qmythread.h"

QMyThread::QMyThread(QObject *parent) : QThread(parent)
{
    m_fStopped = false;
}

void QMyThread::run()
{
    qDebug("Thread %s start", qPrintable(m_strNessage));
    int nCount = 1;
    while (!m_fStopped)
    {
       qDebug("Thread %s %d", qPrintable(m_strNessage), nCount++);
       msleep(1);
    }
    qDebug("Thread %s stopped", qPrintable(m_strNessage));
}
