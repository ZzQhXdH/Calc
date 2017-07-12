#include "MySerialPort.h"


#define COUNTOF(X)        (sizeof(X) / sizeof(X[0]))

const int SerialWidget::BaudRate[] = 
{
	1200, 2400, 4800,9600, 
	19200, 38400, 57600, 115200,	
};

const int SerialWidget::DataBits[] =
{
	5, 6, 7, 8,
};

const QString SerialWidget::Parity[] =
{
   tr("奇校验"),
   tr("偶校验"),
   tr("无奇偶检验"),
};

const QString SerialWidget::StartBits[] =
{
    tr("1个起始位"),
};

const QString SerialWidget::StopBits[] =
{
    tr("1个停止位"),
    tr("1.5个停止位"),
    tr("2个停止位"),
};

const QString SerialWidget::FlowControl[] =
{
    tr("硬件流关闭"),
    tr("硬件流使能"),
    tr("软件控制"),
};

/**
 * @brief SerialWidget::~SerialPort
 */
SerialWidget::~SerialWidget()
{

}

/**
 * @brief SerialWidget::SerialWidget
 * @param parentWidget
 */
SerialWidget::SerialWidget(QWidget *parentWidget):
    QWidget(parentWidget),
    mSerialPort(new QSerialPort(this)),
    mPortInfo(new QSerialPortInfo),
    ui(new Ui_Form)
{
    ui->setupUi(this);
    mPortInfoList.clear();
    initWidget();
    //mSerialPort->setDataBits()
    connect(ui->mKey1_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));
    connect(ui->mKey2_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mKey3_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mKey4_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mKey5_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mKey6_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mKey7_LineEdit, SIGNAL(textEdited(QString)),
            this, SLOT(onKeyValueChange(QString)));

    connect(ui->mOpenCom_Button, SIGNAL(clicked()), this, SLOT(onOpenPort()));
}

/**
 * @brief SerialWidget::initWidget
 */
void SerialWidget::initWidget(void)
{
    for (quint32 i = 0; i < COUNTOF(BaudRate); i ++)
    {
        ui->mBaudrate_ComboBox->addItem(QString::number(BaudRate[i]));
    }
    ui->mBaudrate_ComboBox->setCurrentText(QString("115200"));

	for (quint32 i = 0; i < COUNTOF(DataBits); i ++)
	{
		ui->mDataBit_ComboBox->addItem(QString::number(DataBits[i]));
	}
	ui->mDataBit_ComboBox->setCurrentText(QString("8"));

	for (quint32 i = 0; i < COUNTOF(Parity); i ++)
	{
		ui->mParity_ComboBox->addItem(Parity[i]);
	}
	ui->mParity_ComboBox->setCurrentText(tr("无奇偶检验"));

	for (quint32 i = 0; i < COUNTOF(StartBits); i ++)
	{
		ui->mStartBit_ComboBox->addItem(StartBits[i]);
	}

	for (quint32 i = 0; i < COUNTOF(StopBits); i ++)
	{
		ui->mStopBit_ComboBox->addItem(StopBits[i]);
	}

	for (quint32 i = 0; i < COUNTOF(FlowControl); i ++)
	{
		ui->mHardware_ComboBox->addItem(FlowControl[i]);
	}

	refreshSerialPort();
	for (int i = 0; i < 7; i ++)
	{
		mKey[i] = QString("            ");
		ui->mOne_ComboBox->addItem(mKey[i]);
		ui->mTwo_ComboBox->addItem(mKey[1]);
	}

}

/**
 * @brief SerialWidget::refreshSerialPort
 */
void SerialWidget::refreshSerialPort(void)
{
    mPortInfoList.clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->mComName_ComboBox->addItem(info.portName());
        mPortInfoList.append(info);
    }
}

/**
 * @brief SerialWidget::refreshConfig
 */
void SerialWidget::refreshConfig(void)
{
/*
   if (mSerialPort->isOpen() == false)
   {
       QMessageBox::information(this, tr("错误"), tr("串口没有打开"));
       return;
   }
*/
   /**
    * @brief 波特率
    */
   QString tmp = ui->mBaudrate_ComboBox->currentText();
   mBaudReate = tmp.toInt();

   /**
    *  数据位
    */
   tmp = ui->mDataBit_ComboBox->currentText();
   mDataBits = tmp.toInt();

   /**
    * 奇偶检验
    */
   tmp = ui->mParity_ComboBox->currentText();
   if (tmp == Parity[0]) // 奇校验
   {
       mParity = 3;
   }
   else if (tmp == Parity[1]) // 偶校验
   {
       mParity = 2;
   }
   else if (tmp == Parity[2]) //无校验
   {
       mParity = 0;
   }

   tmp = ui->mStopBit_ComboBox->currentText();
   if (tmp == StopBits[0])
   {
       mStopBits = 1;
   }
   else if (tmp == StopBits[1])
   {
       mStopBits = 3;
   }
   else if (tmp == StopBits[2])
   {
       mStopBits = 2;
   }

   tmp = ui->mHardware_ComboBox->currentText();
   if (tmp == FlowControl[0])
   {
       mFlowControl = 0;
   }
   else if (tmp == FlowControl[1])
   {
       mFlowControl = 1;
   }
   else if (tmp == FlowControl[2])
   {
       mFlowControl = 2;
   }

   mPortName = ui->mComName_ComboBox->currentText();
}

/**
 * @brief SerialWidget::enabledSelect
 */
void SerialWidget::setEnabled(bool ok)
{
    ui->mComName_ComboBox->setEditable(ok);
    ui->mBaudrate_ComboBox->setEnabled(ok);
    ui->mParity_ComboBox->setEnabled(ok);
    ui->mStopBit_ComboBox->setEnabled(ok);
    ui->mStartBit_ComboBox->setEditable(ok);
    ui->mHardware_ComboBox->setEditable(ok);
    ui->mDataBit_ComboBox->setEditable(ok);
}

void SerialWidget::onKeyValueChange(const QString &text)
{
    if (text.length() == 0)
    {
        return;
    }
    const QString &name = sender()->objectName();
    int index = -1;

    if (name == ui->mKey1_LineEdit->objectName())
    {
        index = 0;
    }
    else if (name == ui->mKey2_LineEdit->objectName())
    {
        index = 1;
    }
    else if (name == ui->mKey3_LineEdit->objectName())
    {
        index = 2;
    }
    else if (name == ui->mKey4_LineEdit->objectName())
    {
        index = 3;
    }
    else if (name == ui->mKey5_LineEdit->objectName())
    {
        index = 4;
    }
    else if (name == ui->mKey6_LineEdit->objectName())
    {
        index = 5;
    }
    else if (name == ui->mKey7_LineEdit->objectName())
    {
        index = 6;
    }

    if (index == -1)
    {
        return;
    }

    ui->mOne_ComboBox->setItemText(index, text);
    ui->mTwo_ComboBox->setItemText(index, text);
    mKey[index] = text;
    ui->mOne_ComboBox->setCurrentIndex(index);
    ui->mTwo_ComboBox->setCurrentIndex(index);
}

/**
 * @brief SerialWidget::initSerialPort
 */
void SerialWidget::initSerialPort(void)
{
   mSerialPort->setBaudRate(mBaudReate);
   mSerialPort->setDataBits((QSerialPort::DataBits)mDataBits);
   mSerialPort->setFlowControl((QSerialPort::FlowControl)mFlowControl);
   mSerialPort->setParity((QSerialPort::Parity)mParity);
   mSerialPort->setStopBits((QSerialPort::StopBits)mStopBits);
   mSerialPort->setPortName(mPortName);
   qDebug() << tr("串口名称:%1").arg(mPortName);
   qDebug() << tr("波特率:%1").arg((int)mBaudReate);
   qDebug() << tr("奇偶检验:%1").arg((int)mParity);
   qDebug() << tr("硬件流:%1").arg((int)mFlowControl);
   qDebug() << tr("停止位:%1").arg((int)mStopBits);
   qDebug() << tr("数据位:%1").arg((int)mDataBits);
}

/**
 * @brief SerialWidget::onOpenPort
 */
void SerialWidget::onOpenPort(void)
{
    refreshConfig();
    initSerialPort();
}

