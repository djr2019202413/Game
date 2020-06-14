#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include<QPropertyAnimation>
#include<QPoint>
#include <QPixmap>
#include<QPainter>
class Myobject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QPoint currentPos READ getCurrentPos WRITE setCurrentPos)//
public:
    Myobject(QPoint startPos,QPoint targetPos,QString fileName);//起点，终点，一张图片的路径
    void draw(QPainter*painter);//绘画
    void move();
    QPoint getCurrentPos();//获取当前位置
    void setCurrentPos(QPoint pos);//设定当前位置
private:
   QPoint startPos;//起始位置
   QPoint targetPos;//终止位置
   QPoint currentPos;//过程
   QPixmap pixmap;//一张图
signals:

public slots:
};

#endif // MYOBJECT_H