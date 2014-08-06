#include "thirdwidget.h"

ThirdWidget::ThirdWidget(QWidget *parent) :
    QWidget(parent)
{
    lb = new QLabel(this);
    lb->resize(this->size());
    lb->setText("第三个页面");
    lb->show();
}
