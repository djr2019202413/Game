#include "newbutton1.h"
#include <QPixmap>
#include<QSize>
#include <QPropertyAnimation>

Newbutton1::Newbutton1 (QString pix1):QPushButton(0)//传个0进去初始化
{
    QPixmap pixmap(pix1);//文件路径
    this->setFixedSize(pixmap.width(),pixmap.height());//让按钮和传进来的图一样大
    this->setStyleSheet("QPushButton{border:0px;}");//让按钮和传进来的图一样大
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));//函数特殊用法 变了
   // this->setContextMenuPolicy(Qt::ActionsContextMenu);//文本菜单
//    QAction*action1=new QAction(this);
//    action1->setText("1.set tower");
//    this->addAction(action1);
//    connect(action1,&QAction::triggered,this,[=](){
//        emit chooseset();
//    });

}