#include "mybutton.h"
#include <QPushButton>
#include <QDebug>
Mybutton::Mybutton(QWidget *parent) : QPushButton(parent)
{
   qDebug()<<"Mybutton";

}
//实现析构函数
Mybutton::~Mybutton(){
    qDebug()<<"~Mybutton";
}
