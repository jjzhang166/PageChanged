#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(400,400);
    firstPageWidget = new FirstWidget;
    secondPageWidget = new SecondWidget;
    thirdPageWidget = new ThirdWidget;
    lstWid = new ListWidget;
    connect(lstWid,SIGNAL(signalCurrentItem(QString)),this,SLOT(slotCurrentlstChanged(QString)));
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(lstWid);
    stackedWidget->addWidget(firstPageWidget);
    stackedWidget->addWidget(secondPageWidget);
    stackedWidget->addWidget(thirdPageWidget);
    btn =new QPushButton;
    btn->setText(QString::fromUtf8("返回"));
    connect(btn,SIGNAL(clicked()),this,SLOT(slotBtnReturned()));
    stackedWidget->setCurrentIndex(0);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(stackedWidget);
    layout->addWidget(btn);
    setLayout(layout);
}

Widget::~Widget()
{

}

void Widget::slotCurrentlstChanged(QString str)
{
    if(str == "Oak")
    {
        if(stackedWidget != NULL)
        {
            stackedWidget->setCurrentIndex(1);
        }
    }else if(str == "Fir")
    {
        stackedWidget->setCurrentIndex(2);
    }else if(str == "Pine"){

        stackedWidget->setCurrentIndex(3);
    }else{

    }
}

void Widget::slotBtnReturned()
{
    if(stackedWidget != NULL)
    {
        stackedWidget->setCurrentIndex(0);
    }
}
