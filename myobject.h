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
    Myobject(QPoint startPos,QPoint targetPos,QString fileName);//��㣬�յ㣬һ��ͼƬ��·��
    void draw(QPainter*painter);//�滭
    void move();
    QPoint getCurrentPos();//��ȡ��ǰλ��
    void setCurrentPos(QPoint pos);//�趨��ǰλ��
private:
   QPoint startPos;//��ʼλ��
   QPoint targetPos;//��ֹλ��
   QPoint currentPos;//����
   QPixmap pixmap;//һ��ͼ
signals:

public slots:
};

#endif // MYOBJECT_H