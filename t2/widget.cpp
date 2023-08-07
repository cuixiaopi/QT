#include "widget.h"
#include <QPushButton> //按钮
#include "mybutton.h"
//按钮属性布局
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    /********choose1***********/
//    QPushButton *button  =new QPushButton;
//    //    button->show();直接另外开窗口
//    //设置按钮的父对象为窗口；在原始窗口上显示
//    button->setParent(this);
//    /*********************按钮属性********************/
//    // 设置按钮上的文字
//    button->setText("第一个按钮");
//    button->move(200,200);
//    button->setFixedSize(100,100);

    /********choose2***********/

//    TWO CHOOSE
//    QPushButton *button2  =new QPushButton(" 第二个按钮",this);//con+this
//    this->resize(600,800);
//    button2->setText("第二个按钮");
//    button2->move(300,300);
//    button2->setFixedSize(100,100);


    Mybutton *button= new Mybutton();
    button->setParent(this);
    button->setText("自定义按钮");


}

Widget::~Widget()
{
}

