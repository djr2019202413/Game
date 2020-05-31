#include "newbutton.h"
#include <QPixmap>
#include <QPropertyAnimation>

Newbutton::Newbutton (QString pix):QPushButton(0)//����0��ȥ��ʼ��
{
    QPixmap pixmap(pix);//�ļ�·��
    this->setFixedSize(pixmap.width(),pixmap.height());//�ð�ť�ʹ�������ͼһ����
    this->setStyleSheet("QPushButton{border:0px;}");//�ð�ť�ʹ�������ͼһ����
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));//���������÷�
    //this->setFixedSize(100,50);
}