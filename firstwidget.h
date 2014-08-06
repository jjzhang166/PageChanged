#ifndef FIRSTWIDGET_H
#define FIRSTWIDGET_H

#include <QWidget>
#include <QLabel>
class FirstWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FirstWidget(QWidget *parent = 0);
    QLabel* lb;
signals:

public slots:

};

#endif // FIRSTWIDGET_H
