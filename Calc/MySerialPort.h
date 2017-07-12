#ifndef        __MY_SERIAL_PORT_H
#define        __MY_SERIAL_PORT_H

#include <QWidget>
#include <QtSerialPort/QtSerialPort>
#include <QList>
#include <QMessageBox>
#include <QDebug>
#include "ui_TargetUi.h"


class SerialWidget:public QWidget
{
    Q_OBJECT
public:
    SerialWidget(QWidget *parentWidget = Q_NULLPTR);
    virtual ~SerialWidget();

private slots:
    void onKeyValueChange(const QString &text);
    void onOpenPort(void);

private:
    void initWidget(void);
    void refreshSerialPort(void);
    void refreshConfig(void);
    void setEnabled(bool ok);
    void initSerialPort(void);

    static const int BaudRate[];
    static const int DataBits[];
    static const QString Parity[];
    static const QString StopBits[];
    static const QString StartBits[];
    static const QString FlowControl[];

    QList<QSerialPortInfo> mPortInfoList;
    qint32 mBaudReate;
    qint32 mDataBits;
    qint32 mParity;
    qint32 mFlowControl;
    qint32 mStartBits;
    qint32 mStopBits;
    QString mPortName;
    QString mKey[7];
    QString mKeyValue[7];
    QSerialPort *mSerialPort;
    QSerialPortInfo *mPortInfo;
    Ui_Form *ui;
};





#endif
