#include "newbutton1.h"
#include <QPixmap>
#include<QSize>
#include <QPropertyAnimation>

Newbutton1::Newbutton1 (QString pix1):QPushButton(0)//����0��ȥ��ʼ��
{
    QPixmap pixmap(pix1);//�ļ�·��
    this->setFixedSize(pixmap.width(),pixmap.height());//�ð�ť�ʹ�������ͼһ����
    this->setStyleSheet("QPushButton{border:0px;}");//�ð�ť�ʹ�������ͼһ����
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));//���������÷� ����
   // this->setContextMenuPolicy(Qt::ActionsContextMenu);//�ı��˵�
//    QAction*action1=new QAction(this);
//    action1->setText("1.set tower");
//    this->addAction(action1);
//    connect(action1,&QAction::triggered,this,[=](){
//        emit chooseset();
//    });

}