#include "Meter.h"


/**
 * @brief Meter::~Meter
 */
Meter::~Meter()
{

}

/**
 * @brief Meter::Meter
 * @param parentWidget
 */
Meter::Meter(QWidget *parentWidget):
    QWidget(parentWidget),
    mSteps(10),
    mStartAngle(-45),
    mAngleLength(270),
    mMinValue(0),
    mMaxValue(100),
    mBackgroubndColor(Qt::white),
    mStepColor(Qt::black),
    mTextColor(Qt::red),
    mCurValue(mMinValue),
    mLabel(tr("温度")),
    mUnit(tr("℃")),
    mAlarmColor(Qt::red),
    mNormalColor(Qt::black),
    mCritcalValue(10)
{

}

/**
 * @brief Meter::paintEvent
 * @param event
 */
void Meter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    int w = width();
    int h = height();
    int a = (w < h ? w : h) - 20;
    int x0 = (w - a) / 2;
    int y0 = (h - a) / 2;
    int r = a / 2;

    /**
     * @brief 绘制圆弧
     */
    double k0 = -mAngleLength / (mMaxValue - mMinValue);
    double b0 = mStartAngle - k0 * mMaxValue;
	double alarmAngle = mCritcalValue * k0 + b0;
    painter.setRenderHint(QPainter::Antialiasing, true);
    QPen pen(mAlarmColor);
    pen.setWidth(20);
    painter.setPen(pen);
    painter.drawArc(x0, y0, a, a, 
				mStartAngle * 16, 
				(alarmAngle - mStartAngle) * 16);
    pen.setColor(mNormalColor);
	painter.setPen(pen);
	painter.drawArc(x0, y0, a, a, 
				alarmAngle * 16, 
				(mAngleLength + mStartAngle - alarmAngle) * 16);

    /**
     * @brief 绘制刻度
     */
    double integal = mAngleLength / (mSteps);
    double angle = -mStartAngle;
    pen.setWidth(5);
    pen.setColor(mStepColor);
    painter.setPen(pen);
    painter.save();
    painter.translate(w/2, h/2);
    painter.rotate(angle);
    for (int i = 0; i <= mSteps; i ++)
    {
        painter.drawLine(r * 0.8, 0, r * 0.9, 0);
        painter.rotate(-integal);
    }
    painter.restore();

    /**
     * 绘制刻度值
     */
    painter.save();
    painter.translate(w / 2, h / 2);
    angle = mStartAngle;
    double r0 = r * 0.7;
    QFont f = font();
    QFontMetrics metrics(f);
    QString str;
    double valueIntegal = (mMaxValue - mMinValue) / mSteps;
    double value = mMaxValue;
    for (int i = 0; i <= mSteps; i ++)
    {
        str = str.number(value);
        value -= valueIntegal;
        int x0 = r0 * qCos(angle / 180 * M_PI) - metrics.width(str) / 2;
        int y0 = -r0 * qSin(angle / 180 * M_PI) + metrics.height() / 2;
        painter.drawText(x0, y0, str);
        angle += integal;
        painter.drawText(x0, y0, str);
    }

    /**
     * @brief 绘制指针
     */
    double r1 = r0  * 0.5;
    double rc = r0 * 0.8;
    pen.setWidth(1);
    painter.setPen(pen);
    painter.setBrush(mStepColor);
    double curAngle = mCurValue * k0 + b0;
    int x1 = r1 * qCos((curAngle - 45) / 180 * M_PI) / 2;
    int y1 = -r1 * qSin((curAngle - 45) / 180 * M_PI) / 2;
    int x2 = r1 * qCos((curAngle + 45) / 180 * M_PI) / 2;
    int y2 = -r1 * qSin((curAngle + 45) / 180 * M_PI) / 2;
    int x3 = rc * qCos((curAngle) / 180 * M_PI);
    int y3 = -rc * qSin((curAngle) / 180 * M_PI);

    QPolygon polygon;
    polygon.append(QPoint(0, 0));
    polygon.append(QPoint(x1, y1));
    polygon.append(QPoint(x3, y3));
    polygon.append(QPoint(x2, y2));
    painter.drawPolygon(polygon);

    int y4 = r0 * 0.8;
    QString disp = mLabel + QString(":") + QString::number(mCurValue) + mUnit;
    int x4 = -metrics.width(disp) / 2;
    y4 = y4 + metrics.height() / 2;
    painter.drawText(x4, y4, disp);

    painter.restore();

    painter.setBrush(mTextColor);
    painter.drawEllipse((w - r1)/2, (h - r1)/2, r1, r1);

    painter.end();
    event->accept();
}













