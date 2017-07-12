#include <QApplication>
#include "Calc.h"
#include "Meter.h"
#include "MySerialPort.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    SerialWidget win;
    win.show();

    return app.exec();
}








