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
    QPropertyAnimation*animation=new QPropertyAnimation(this,"currentPos");//����һ��������
    animation->setDuration(2000);
    animation->setStartValue(startPos);//���
    animation->setEndValue(targetPos);//�յ�
    animation->start();
}
QPoint Myobject::getCurrentPos()
{
    return this->currentPos;//���ص�ǰλ��
}
void Myobject::setCurrentPos(QPoint pos)
{
    this->currentPos=pos;
}
