#ifndef MYOBJECT2_H
#define MYOBJECT2_H

#include <QObject>
#include<QPropertyAnimation>
#include<QPoint>
#include <QPixmap>
#include<QPainter>
class Myobject2 : public QObject
{
    Q_OBJECT
public:
    Myobject2(QPoint startPos,QPoint targetPos,QString fileName);//起点，终点，一张图片的路径
    void move();
    void draw(QPainter*painter);
private:
    QPoint startPos;
    QPoint currentPos;
    QPoint targetPos;
    QPixmap pixmap;
    qreal  speed;
signals:

};

#endif // MYOBJECT2_H