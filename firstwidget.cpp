#include "firstwidget.h"

FirstWidget::FirstWidget(QWidget *parent) :
    QWidget(parent)
{
    lb = new QLabel(this);
    lb->resize(this->size());
    lb->setText("第一个页面");
    lb->show();
}
