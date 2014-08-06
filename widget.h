#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "firstwidget.h"
#include "secondwidget.h"
#include "thirdwidget.h"
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "listwidget.h"
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    FirstWidget *firstPageWidget;
    SecondWidget *secondPageWidget;
    ThirdWidget *thirdPageWidget;
    QStackedWidget *stackedWidget;
    ListWidget* lstWid;
    QPushButton* btn;
public slots:
    void slotCurrentlstChanged(QString);
    void slotBtnReturned();
};

#endif // WIDGET_H
