#ifndef     __METER_H
#define     __METER_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include <QColor>
#include <QPen>
#include <QBrush>
#include <QtMath>
#include <QFontMetrics>
#include <QPainterPath>
#include <QPoint>


class Meter:public QWidget
{
    Q_OBJECT
public:
    Meter(QWidget *parentWidget = Q_NULLPTR);
    virtual ~Meter();

public slots:
    inline void setCurrentValue(double value) {
        mCurValue = value;
        update();
    }
	
    inline void setCurrentValue(int value) {
        mCurValue = value;
        update();
    }

	inline void setTextColor(QColor color) {
		mTextColor = color;
		update();
	}

	inline void setBackgroundColor(QColor color) {
		mBackgroubndColor = color;
		update();
	}

	inline void setStepColor(QColor color) {
		mStepColor = color;
		update();
	}

	inline void setLabel(const QString &label) {
		mLabel = label;
		update();
	}

	inline void setUnit(const QString &unit) {
		mUnit = unit;
		update();
	}

public:
    inline double getCurrentValue(void) {
        return mCurValue;
    }

	inline QColor getTextColor(void) {
		return mTextColor;
	}

	inline QColor getBackgroundColor(void) {
		return mBackgroubndColor;
	}

	inline QColor getStepColor(void) {
		return mSteps;
	}


protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    int mSteps;
    double mMaxValue;
    double mMinValue;
    double mStartAngle;
    double mAngleLength;
    double mCurValue;
    double mCritcalValue;
	QColor mAlarmColor;
	QColor mNormalColor;
    QColor mBackgroubndColor;
    QColor mStepColor;
    QColor mTextColor;
    QString mLabel;
    QString mUnit;
};







#endif
