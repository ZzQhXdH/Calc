#ifndef     __CALC_H
#define     __CALC_H


#include <QWidget>
#include "ui_widget.h"


class CalcWidget:public QWidget
{
    Q_OBJECT
public:
    CalcWidget(QWidget *parentWidget = Q_NULLPTR);
    virtual ~CalcWidget();

private:
    Ui_Widget *ui;

};









#endif
