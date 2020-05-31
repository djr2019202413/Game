#ifndef NEWBUTTON_H
#define NEWBUTTON_H

#include <QWidget>
#include <QPushButton>
class Newbutton : public QPushButton
{
    Q_OBJECT
public:
    Newbutton(QString pix);//传个按钮图片
    //void down();//向下跳
    //void up();//向上跳
signals:

//public slots:
};
#endif//NEWBUTTON_H