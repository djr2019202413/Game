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
    Newbutton(QString pix);//传个按钮图片
    //void down();//向下跳
    //void up();//向上跳
signals:
   void chooseset();
//public slots:
};
#endif//NEWBUTTON_H
