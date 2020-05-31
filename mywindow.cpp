#include "mywindow.h"
#include"newbutton.h"
#include<QPainter>
MyWindow::MyWindow(QWidget *parent) : QWidget(parent)
{
 this->setFixedSize(1000,800);

    Newbutton*back_but=new Newbutton(":/elfin1.png");
    back_but->setParent(this);
    back_but->move(40,40);
    Newbutton*setTower=new Newbutton(":/elfin1.png");
    setTower->setParent(this);
    setTower->move(200,200);
    connect(setTower,&Newbutton::clicked,this,&MyWindow::set_tower);
    connect(back_but,&Newbutton::clicked,this,[=](){
        emit chooseBack();
    });
}
void MyWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    foreach(Tower*tower,tower_list)
    tower->draw(&painter);
}
void MyWindow::set_tower()
{
    Tower*a_new_tower=new Tower(QPoint(200,500),":/tower1.png");
    tower_list.push_back(a_new_tower);
    update();
}
