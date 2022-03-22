#include "ffmpegDemo.h"
#include <QtWidgets/QApplication>
#include <stdio.h>
#include <iostream>

extern "C"
{
#include <libavcodec\avcodec.h>
}

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //ffmpegDemo w;
    //w.show();
	printf("test\n");
	printf("%s", avcodec_configuration());
	system("pause");


	return 0;// a.exec();
}
