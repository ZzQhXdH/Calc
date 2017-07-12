#-------------------------------------------------
#
# Project created by QtCreator 2017-07-11T10:08:13
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calc
TEMPLATE = app


SOURCES += main.cpp \
    Calc.cpp \
    Meter.cpp \
    MySerialPort.cpp \
    Led.cpp

HEADERS  += \
    Calc.h \
    Meter.h \
    MySerialPort.h \
    Led.h

FORMS    += widget.ui \
    TargetUi.ui
