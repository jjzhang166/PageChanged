#include "secondwidget.h"

SecondWidget::SecondWidget(QWidget *parent) :
    QWidget(parent)
{
    lb = new QLabel(this);
    lb->resize(this->size());
    lb->setText("第二个页面");
    lb->show();
}
