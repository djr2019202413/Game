#include "myobject.h"

Myobject::Myobject(QPoint startPos,QPoint targetPos,QString fileName) : QObject(0),pixmap(fileName)
{
this->currentPos=startPos;
    this->startPos=startPos;
    this->targetPos=targetPos;
}
void Myobject::draw(QPainter *painter)
{
    painter->drawPixmap(currentPos,pixmap);
}
void Myobject::move()
{
    QPropertyAnimation*animation=new QPropertyAnimation(this,"currentPos");//创建一个动画类
    animation->setDuration(2000);
    animation->setStartValue(startPos);//起点
    animation->setEndValue(targetPos);//终点
    animation->start();
}
QPoint Myobject::getCurrentPos()
{
    return this->currentPos;//返回当前位置
}
void Myobject::setCurrentPos(QPoint pos)
{
    this->currentPos=pos;
}
