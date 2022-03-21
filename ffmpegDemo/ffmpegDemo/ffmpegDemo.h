#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ffmpegDemo.h"

class ffmpegDemo : public QMainWindow
{
    Q_OBJECT

public:
    ffmpegDemo(QWidget *parent = Q_NULLPTR);

private:
    Ui::ffmpegDemoClass ui;
};
