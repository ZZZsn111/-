#include "demo1.h"
#include "ui_demo1.h"

Demo1::Demo1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Demo1)
{
    ui->setupUi(this);
}

Demo1::~Demo1()
{
    delete ui;
}
