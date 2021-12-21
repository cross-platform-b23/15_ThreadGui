#include "threaddialog.h"
#include "ui_threaddialog.h"

ThreadDialog::ThreadDialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ThreadDialog)
{
    ui->setupUi(this);
    m_ThreadA.setMessage("A");
    m_ThreadB.setMessage("B");
}

ThreadDialog::~ThreadDialog()
{
    delete ui;
}

void ThreadDialog::on_pushButtonA_clicked()
{
    if (m_ThreadA.isRunning())
    {
        m_ThreadA.stop();
        ui->pushButtonA->setText("Start A");
    }
    else
    {
        m_ThreadA.startThread();
        ui->pushButtonA->setText("Stop A");
    }
}

void ThreadDialog::on_pushButtonB_clicked()
{
    if (m_ThreadB.isRunning())
    {
        m_ThreadB.stop();
        ui->pushButtonB->setText("Start B");
    }
    else
    {
        m_ThreadB.startThread();
        ui->pushButtonB->setText("Stop B");
    }
}

