#include "Calc.h"




/**
 * @brief CalcWidget::~ClacWidget
 */
CalcWidget::~CalcWidget()
{

}

/**
 * @brief CalcWidget::CalcWidget
 * @param parentWidget
 */
CalcWidget::CalcWidget(QWidget *parentWidget):
    QWidget(parentWidget),
    ui(new Ui_Widget)
{
    ui->setupUi(this);
    ui->horizontalSlider->setRange(0, 100);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->mMeter, SLOT(setCurrentValue(int)));
}











