#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QPushButton>
#include <QDebug>
#include<QPaintEvent>
#include<QTimer>
#include"newbutton.h"
#include"mywindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setFixedSize(1000,800);
    ui->setupUi(this);
    Newbutton*but=new Newbutton(":/elfin1.png");
    but->setParent (this);
    but->move(800,500);
    MyWindow*scene=new MyWindow;
    connect(but,&Newbutton::clicked,this,[=](){

        this->hide();
        scene->show();
    });

 connect(scene,&MyWindow::chooseBack,this,[=](){
    scene->hide();
    this->show();
 });
}
 //在mywindow里创建back_but clicked emit chooseBack按钮,实现效果
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *)
{
   QPainter painter(this);
   QPixmap pixmap(":/bground2.jpg");//主背景
   painter.drawPixmap(0,0,this->width(),this->height(),pixmap);//主背景设置

}