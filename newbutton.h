#ifndef NEWBUTTON_H
#define NEWBUTTON_H

#include <QWidget>
#include <QPushButton>
#include<QAction>
#include<QPixmap>
class Newbutton : public QPushButton
{
    Q_OBJECT
public:
    Newbutton(QString pix);//������ťͼƬ
    //void down();//������
    //void up();//������
signals:
   void chooseset();
//public slots:
};
#endif//NEWBUTTON_H
