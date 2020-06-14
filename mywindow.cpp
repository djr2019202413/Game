#include "mywindow.h"
#include"newbutton.h"
#include<QPainter>
#include<QTimer>
#include<myobject2.h>
#include<QDebug>
#include<newbutton1.h>
MyWindow::MyWindow(QWidget *parent) : QWidget(parent)
{
 this->setFixedSize(1000,800);

    Newbutton1*back_but=new Newbutton1(":/elfin1.png");//����л�������
    back_but->setParent(this);
    back_but->move(40,40);
    Newbutton*setTower1=new Newbutton(":/bullet2.png");//�������
    setTower1->setParent(this);
    setTower1->move(600,530);
    Newbutton*setTower2=new Newbutton(":/bullet2.png");//�������
    setTower2->setParent(this);
    setTower2->move(300,530);
    Newbutton*setTower3=new Newbutton(":/bullet2.png");//������� *bug
    setTower3->setParent(this);
    setTower3->move(300,330);
    Newbutton*setenemy=new Newbutton(":/bullet2.png");//���������
    setenemy->setParent(this);
    setenemy->move(800,600);
    connect(setenemy,&Newbutton::clicked,this,&MyWindow::addMyobject);
    connect(setTower1,&Newbutton::chooseset,this,&MyWindow::set_tower);
    connect(setTower2,&Newbutton::chooseset,this,&MyWindow::set_tower1);
    connect(back_but,&Newbutton1::clicked,this,[=](){
        emit chooseBack();
    });
    QTimer*timer=new QTimer(this);//��ǰ�����ʱ��
    connect(timer,&QTimer::timeout,this,&MyWindow::updateScene);
            timer->start(10);//ÿʮ���봥��timeout���ٴ���updatescene

}
void MyWindow::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QPixmap pixmap(":/mainb1.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
    foreach(Tower*tower,tower_list)//����ˢ�¾���
    tower->draw(&painter);
    foreach(Myobject*object,object_list)//����ȥ
        object->draw(&painter);
    foreach(Myobject2*object,object2_list)
        object->draw(&painter);
}
void MyWindow::set_tower()
{
    Tower*a_new_tower=new Tower(QPoint(200,500),":/tower2.png");
    tower_list.push_back(a_new_tower);
    update();//ˢ��
}
void MyWindow::set_tower1()
{
    Tower*a_new_tower=new Tower(QPoint(200,300),":/tower2.png");
    tower_list.push_back(a_new_tower);
    update();//ˢ��
}

void MyWindow::addMyobject()
{

    Myobject2*object=new Myobject2(QPoint(0,430),QPoint(1000,430),":/enemy.png");//��ʼλ�ã��յ�λ��
    object2_list.push_back(object);
    //object->move();
    update();
}
void MyWindow::updateScene()
{
    foreach(Myobject2*object,object2_list)
      object->move();
    update();
}