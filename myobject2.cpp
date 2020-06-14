#include "myobject2.h"
#include<QPoint>
#include<QVector2D>
#include<QPointer>

Myobject2::Myobject2(QPoint startPos,QPoint targetPos,QString fileName) : QObject(0),pixmap(fileName)
{
   this->startPos=startPos;
    this->currentPos=startPos;
    this->targetPos=targetPos;
    speed=1.0;
}
void Myobject2::move()
{
    QVector2D vector(targetPos-startPos);
    vector.normalize();
    currentPos=currentPos+vector.toPoint()*speed;
}
void Myobject2::draw(QPainter*painter)
{
    painter->drawPixmap(currentPos,pixmap);
}