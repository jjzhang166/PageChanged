#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QDebug>

class ListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ListWidget(QWidget *parent = 0);
    QListWidget* listWidget;
signals:
    void signalCurrentItem(QString);
public slots:
    void currentItem(QListWidgetItem*);
};

#endif // LISTWIDGET_H
