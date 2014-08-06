#ifndef SECONDWIDGET_H
#define SECONDWIDGET_H

#include <QWidget>
#include <QLabel>
class SecondWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SecondWidget(QWidget *parent = 0);
    QLabel* lb;
signals:

public slots:

};

#endif // SECONDWIDGET_H
