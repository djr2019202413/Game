#ifndef MYWINDOW_H
#define MYWINDOW_H

#include<QMainWindow>
#include <QWidget>
#include "tower.h"
#include <QList>
#include"myobject.h"
#include"myobject2.h"
class MyWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    void set_tower();
    void set_tower1();
    void addMyobject();
    void updateScene();
 private:
    QList<Tower*>tower_list;
    QList<Myobject*>object_list;
    QList<Myobject2*>object2_list;
signals:
    void chooseBack();
//public slots:
};

#endif // MYWINDOW_H