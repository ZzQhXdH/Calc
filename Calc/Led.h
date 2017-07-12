#ifndef        __LED_H
#define        __LED_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QColor>


class Led:public QWidget
{
    Q_OBJECT
public:
    Led(QWidget *parentWidget = Q_NULLPTR);
    virtual ~Led();

    inline void on(void) {
        mStatus = true;
    }

    inline void off(void) {
        mStatus = false;
    }

    inline void setONColor(QColor color) {
        mONColor = color;
    }

    inline void setOFFColor(QColor color) {
        mOFFColor = color;
    }

protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    QColor mOFFColor;
    QColor mONColor;
    bool mStatus;
};









#endif
