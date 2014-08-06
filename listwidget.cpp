#include "listwidget.h"

ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent)
{
    listWidget = new QListWidget(this);
    new QListWidgetItem(tr("Oak"), listWidget);
    new QListWidgetItem(tr("Fir"), listWidget);
    new QListWidgetItem(tr("Pine"), listWidget);
    connect(listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(currentItem(QListWidgetItem*)));
}

void ListWidget::currentItem(QListWidgetItem *item)
{
   qDebug()<<"currentItem  "<<item->text();
   emit signalCurrentItem(item->text());
}
