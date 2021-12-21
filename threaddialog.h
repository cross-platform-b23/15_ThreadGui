// repo: https://github.com/cross-platform-b23

#ifndef THREADDIALOG_H
#define THREADDIALOG_H

#include <QWidget>
#include "qmythread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ThreadDialog; }
QT_END_NAMESPACE

class ThreadDialog : public QWidget
{
    Q_OBJECT

public:
    ThreadDialog(QWidget *parent = nullptr);
    ~ThreadDialog();
protected slots:
    void on_pushButtonA_clicked();
    void on_pushButtonB_clicked();
private:
    Ui::ThreadDialog *ui;
    QMyThread m_ThreadA;
    QMyThread m_ThreadB;
};
#endif // THREADDIALOG_H
