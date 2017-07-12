#include "Led.h"


/**
 * @brief Led::~Led
 */
Led::~Led()
{

}

/**
 * @brief Led::Led
 * @param parentWidget
 */
Led::Led(QWidget *parentWidget):
    QWidget(parentWidget),
    mOFFColor(Qt::black),
    mONColor(Qt::red),
    mStatus(false)
{

}

/**
 * @brief Led::paintEvent
 * @param event
 */
void Led::paintEvent(QPaintEvent *event)
{
    int w = width();
    int h = height();
    int a = (w < h ? w : h);
    int x0 = (w - a) / 2;
    int y0 = (h - a) / 2;
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    if (mStatus)
    {
        painter.setPen(mONColor);
        painter.setBrush(mOFFColor);
    }
    else
    {
        painter.setPen(mOFFColor);
        painter.setBrush(mOFFColor);
    }

    painter.drawEllipse(x0, y0, a, a);
    event->accept();
}


















