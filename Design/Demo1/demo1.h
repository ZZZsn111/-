#ifndef DEMO1_H
#define DEMO1_H

#include <QDialog>

namespace Ui {
class Demo1;
}

class Demo1 : public QDialog
{
    Q_OBJECT

public:
    explicit Demo1(QWidget *parent = 0);
    ~Demo1();

private:
    Ui::Demo1 *ui;
};

#endif // DEMO1_H
