/********************************************************************************
** Form generated from reading UI file 'TargetUi.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETUI_H
#define UI_TARGETUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "led.h"
#include "meter.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *mKey1_LineEdit;
    QLabel *label_7;
    QLineEdit *mValue1_LineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mKey2_LineEdit;
    QLabel *label_8;
    QLineEdit *mValue2_LineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mKey3_LineEdit;
    QLabel *label_9;
    QLineEdit *mValue3_LineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mKey4_LineEdit;
    QLabel *label_10;
    QLineEdit *mValue4_LineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *mKey5_LineEdit;
    QLabel *label_11;
    QLineEdit *mValue5_LineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *mKey6_LineEdit;
    QLabel *label_12;
    QLineEdit *mValue6_LineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *mKey7_LineEdit;
    QLabel *label_13;
    QLineEdit *mValue7_LineEdit;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *mOne_ComboBox;
    QPushButton *mOne_Button;
    QComboBox *mTwo_ComboBox;
    QPushButton *mTwo_Button;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *mHexRecv_Check;
    QPushButton *mClearRecv_Button;
    QCheckBox *mHexSend_Check;
    QGridLayout *gridLayout_3;
    Meter *mOneMeter;
    Meter *mTwoMeter;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *mSend_LineEdit;
    QPushButton *mSend_Button;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_2;
    QComboBox *mComName_ComboBox;
    QComboBox *mBaudrate_ComboBox;
    QComboBox *mParity_ComboBox;
    QComboBox *mStopBit_ComboBox;
    QComboBox *mStartBit_ComboBox;
    QComboBox *mHardware_ComboBox;
    QComboBox *mDataBit_ComboBox;
    QHBoxLayout *horizontalLayout_2;
    Led *mLed;
    QPushButton *mOpenCom_Button;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1064, 693);
        gridLayout_4 = new QGridLayout(Form);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setSizeIncrement(QSize(50, 0));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        textEdit->setFont(font);

        gridLayout_4->addWidget(textEdit, 0, 1, 1, 1);

        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mKey1_LineEdit = new QLineEdit(groupBox);
        mKey1_LineEdit->setObjectName(QStringLiteral("mKey1_LineEdit"));
        mKey1_LineEdit->setFont(font1);
        mKey1_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(mKey1_LineEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        mValue1_LineEdit = new QLineEdit(groupBox);
        mValue1_LineEdit->setObjectName(QStringLiteral("mValue1_LineEdit"));
        mValue1_LineEdit->setFont(font1);
        mValue1_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(mValue1_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mKey2_LineEdit = new QLineEdit(groupBox);
        mKey2_LineEdit->setObjectName(QStringLiteral("mKey2_LineEdit"));
        mKey2_LineEdit->setFont(font1);
        mKey2_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(mKey2_LineEdit);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_8);

        mValue2_LineEdit = new QLineEdit(groupBox);
        mValue2_LineEdit->setObjectName(QStringLiteral("mValue2_LineEdit"));
        mValue2_LineEdit->setFont(font1);
        mValue2_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(mValue2_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mKey3_LineEdit = new QLineEdit(groupBox);
        mKey3_LineEdit->setObjectName(QStringLiteral("mKey3_LineEdit"));
        mKey3_LineEdit->setFont(font1);
        mKey3_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(mKey3_LineEdit);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_9);

        mValue3_LineEdit = new QLineEdit(groupBox);
        mValue3_LineEdit->setObjectName(QStringLiteral("mValue3_LineEdit"));
        mValue3_LineEdit->setFont(font1);
        mValue3_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(mValue3_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mKey4_LineEdit = new QLineEdit(groupBox);
        mKey4_LineEdit->setObjectName(QStringLiteral("mKey4_LineEdit"));
        mKey4_LineEdit->setFont(font1);
        mKey4_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(mKey4_LineEdit);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_10);

        mValue4_LineEdit = new QLineEdit(groupBox);
        mValue4_LineEdit->setObjectName(QStringLiteral("mValue4_LineEdit"));
        mValue4_LineEdit->setFont(font1);
        mValue4_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(mValue4_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mKey5_LineEdit = new QLineEdit(groupBox);
        mKey5_LineEdit->setObjectName(QStringLiteral("mKey5_LineEdit"));
        mKey5_LineEdit->setFont(font1);
        mKey5_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(mKey5_LineEdit);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_11);

        mValue5_LineEdit = new QLineEdit(groupBox);
        mValue5_LineEdit->setObjectName(QStringLiteral("mValue5_LineEdit"));
        mValue5_LineEdit->setFont(font1);
        mValue5_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(mValue5_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        mKey6_LineEdit = new QLineEdit(groupBox);
        mKey6_LineEdit->setObjectName(QStringLiteral("mKey6_LineEdit"));
        mKey6_LineEdit->setFont(font1);
        mKey6_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(mKey6_LineEdit);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_12);

        mValue6_LineEdit = new QLineEdit(groupBox);
        mValue6_LineEdit->setObjectName(QStringLiteral("mValue6_LineEdit"));
        mValue6_LineEdit->setFont(font1);
        mValue6_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(mValue6_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mKey7_LineEdit = new QLineEdit(groupBox);
        mKey7_LineEdit->setObjectName(QStringLiteral("mKey7_LineEdit"));
        mKey7_LineEdit->setFont(font1);
        mKey7_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(mKey7_LineEdit);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_13);

        mValue7_LineEdit = new QLineEdit(groupBox);
        mValue7_LineEdit->setObjectName(QStringLiteral("mValue7_LineEdit"));
        mValue7_LineEdit->setFont(font1);
        mValue7_LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(mValue7_LineEdit);


        gridLayout_2->addLayout(horizontalLayout_9, 6, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 2, 3, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(100);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        mOne_ComboBox = new QComboBox(Form);
        mOne_ComboBox->setObjectName(QStringLiteral("mOne_ComboBox"));
        mOne_ComboBox->setFont(font1);

        horizontalLayout_12->addWidget(mOne_ComboBox);

        mOne_Button = new QPushButton(Form);
        mOne_Button->setObjectName(QStringLiteral("mOne_Button"));
        mOne_Button->setFont(font1);

        horizontalLayout_12->addWidget(mOne_Button);

        mTwo_ComboBox = new QComboBox(Form);
        mTwo_ComboBox->setObjectName(QStringLiteral("mTwo_ComboBox"));
        mTwo_ComboBox->setFont(font1);

        horizontalLayout_12->addWidget(mTwo_ComboBox);

        mTwo_Button = new QPushButton(Form);
        mTwo_Button->setObjectName(QStringLiteral("mTwo_Button"));
        mTwo_Button->setFont(font1);

        horizontalLayout_12->addWidget(mTwo_Button);


        gridLayout_4->addLayout(horizontalLayout_12, 1, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mHexRecv_Check = new QCheckBox(Form);
        mHexRecv_Check->setObjectName(QStringLiteral("mHexRecv_Check"));
        mHexRecv_Check->setFont(font1);

        verticalLayout_5->addWidget(mHexRecv_Check);

        mClearRecv_Button = new QPushButton(Form);
        mClearRecv_Button->setObjectName(QStringLiteral("mClearRecv_Button"));
        mClearRecv_Button->setFont(font1);

        verticalLayout_5->addWidget(mClearRecv_Button);

        mHexSend_Check = new QCheckBox(Form);
        mHexSend_Check->setObjectName(QStringLiteral("mHexSend_Check"));
        mHexSend_Check->setFont(font1);

        verticalLayout_5->addWidget(mHexSend_Check);


        gridLayout_4->addLayout(verticalLayout_5, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mOneMeter = new Meter(Form);
        mOneMeter->setObjectName(QStringLiteral("mOneMeter"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(mOneMeter->sizePolicy().hasHeightForWidth());
        mOneMeter->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mOneMeter, 0, 0, 1, 1);

        mTwoMeter = new Meter(Form);
        mTwoMeter->setObjectName(QStringLiteral("mTwoMeter"));
        sizePolicy1.setHeightForWidth(mTwoMeter->sizePolicy().hasHeightForWidth());
        mTwoMeter->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mTwoMeter, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        mSend_LineEdit = new QLineEdit(Form);
        mSend_LineEdit->setObjectName(QStringLiteral("mSend_LineEdit"));
        mSend_LineEdit->setFont(font1);

        horizontalLayout_11->addWidget(mSend_LineEdit);

        mSend_Button = new QPushButton(Form);
        mSend_Button->setObjectName(QStringLiteral("mSend_Button"));
        mSend_Button->setFont(font1);

        horizontalLayout_11->addWidget(mSend_Button);


        gridLayout_4->addLayout(horizontalLayout_11, 3, 0, 1, 2);

        mGroupBox = new QGroupBox(Form);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        mGroupBox->setFont(font1);
        mGroupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(mGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(mGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label = new QLabel(mGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(mGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(mGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_14 = new QLabel(mGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_14);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mComName_ComboBox = new QComboBox(mGroupBox);
        mComName_ComboBox->setObjectName(QStringLiteral("mComName_ComboBox"));
        mComName_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mComName_ComboBox);

        mBaudrate_ComboBox = new QComboBox(mGroupBox);
        mBaudrate_ComboBox->setObjectName(QStringLiteral("mBaudrate_ComboBox"));
        mBaudrate_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mBaudrate_ComboBox);

        mParity_ComboBox = new QComboBox(mGroupBox);
        mParity_ComboBox->setObjectName(QStringLiteral("mParity_ComboBox"));
        mParity_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mParity_ComboBox);

        mStopBit_ComboBox = new QComboBox(mGroupBox);
        mStopBit_ComboBox->setObjectName(QStringLiteral("mStopBit_ComboBox"));
        mStopBit_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mStopBit_ComboBox);

        mStartBit_ComboBox = new QComboBox(mGroupBox);
        mStartBit_ComboBox->setObjectName(QStringLiteral("mStartBit_ComboBox"));
        mStartBit_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mStartBit_ComboBox);

        mHardware_ComboBox = new QComboBox(mGroupBox);
        mHardware_ComboBox->setObjectName(QStringLiteral("mHardware_ComboBox"));
        mHardware_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mHardware_ComboBox);

        mDataBit_ComboBox = new QComboBox(mGroupBox);
        mDataBit_ComboBox->setObjectName(QStringLiteral("mDataBit_ComboBox"));
        mDataBit_ComboBox->setFont(font1);

        verticalLayout_2->addWidget(mDataBit_ComboBox);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mLed = new Led(mGroupBox);
        mLed->setObjectName(QStringLiteral("mLed"));
        mLed->setSizeIncrement(QSize(1, 1));

        horizontalLayout_2->addWidget(mLed);

        mOpenCom_Button = new QPushButton(mGroupBox);
        mOpenCom_Button->setObjectName(QStringLiteral("mOpenCom_Button"));
        QFont font2;
        font2.setPointSize(14);
        mOpenCom_Button->setFont(font2);

        horizontalLayout_2->addWidget(mOpenCom_Button);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);


        gridLayout_4->addWidget(mGroupBox, 0, 0, 2, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        groupBox->setTitle(QApplication::translate("Form", "\351\224\256\345\200\274\346\243\200\346\265\213", 0));
        label_7->setText(QApplication::translate("Form", ":", 0));
        label_8->setText(QApplication::translate("Form", ":", 0));
        label_9->setText(QApplication::translate("Form", ":", 0));
        label_10->setText(QApplication::translate("Form", ":", 0));
        label_11->setText(QApplication::translate("Form", ":", 0));
        label_12->setText(QApplication::translate("Form", ":", 0));
        label_13->setText(QApplication::translate("Form", ":", 0));
        mOne_Button->setText(QApplication::translate("Form", "\347\241\256\345\256\232", 0));
        mTwo_Button->setText(QApplication::translate("Form", "\347\241\256\345\256\232", 0));
        mHexRecv_Check->setText(QApplication::translate("Form", "16\350\277\233\345\210\266\346\230\276\347\244\272", 0));
        mClearRecv_Button->setText(QApplication::translate("Form", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", 0));
        mHexSend_Check->setText(QApplication::translate("Form", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        mSend_Button->setText(QApplication::translate("Form", "\345\217\221\351\200\201", 0));
        mGroupBox->setTitle(QApplication::translate("Form", "\344\270\262\345\217\243\344\277\241\346\201\257", 0));
        label_6->setText(QApplication::translate("Form", "\344\270\262\345\217\243:", 0));
        label->setText(QApplication::translate("Form", "\346\263\242\347\211\271\347\216\207:", 0));
        label_2->setText(QApplication::translate("Form", "\345\245\207\345\201\266\346\240\241\351\252\214:", 0));
        label_3->setText(QApplication::translate("Form", "\345\201\234\346\255\242\344\275\215:", 0));
        label_4->setText(QApplication::translate("Form", "\350\265\267\345\247\213\344\275\215:", 0));
        label_5->setText(QApplication::translate("Form", "\347\241\254\344\273\266\346\265\201:", 0));
        label_14->setText(QApplication::translate("Form", "\346\225\260\346\215\256\344\275\215:", 0));
        mOpenCom_Button->setText(QApplication::translate("Form", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETUI_H
