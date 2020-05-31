#include "newbutton.h"
#include <QPixmap>
#include <QPropertyAnimation>

Newbutton::Newbutton (QString pix):QPushButton(0)//传个0进去初始化
{
    QPixmap pixmap(pix);//文件路径
    this->setFixedSize(pixmap.width(),pixmap.height());//让按钮和传进来的图一样大
    this->setStyleSheet("QPushButton{border:0px;}");//让按钮和传进来的图一样大
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));//函数特殊用法
    //this->setFixedSize(100,50);
}