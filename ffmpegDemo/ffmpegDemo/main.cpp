#include "ffmpegDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ffmpegDemo w;
    w.show();
    return a.exec();
}
