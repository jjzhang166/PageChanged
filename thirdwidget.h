#ifndef THIRDWIDGET_H
#define THIRDWIDGET_H

#include <QWidget>
#include <QLabel>

class ThirdWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ThirdWidget(QWidget *parent = 0);
    QLabel* lb;
signals:

public slots:

};

#endif // THIRDWIDGET_H
