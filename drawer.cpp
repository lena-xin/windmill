#include "drawer.h"

Drawer::Drawer(QWidget *parent,Qt::WindowFlags f)
    : QToolBox(parent,f)
{
    setWindowTitle("我的QQ");
    resize(400,800);
    QStringList pic1;
    pic1<<"://pic/1.png"<<"://pic/2.png"<<"://pic/3.png";

    QGroupBox *gBox1 = new QGroupBox;
    QVBoxLayout *vLayout1 = new QVBoxLayout(gBox1);
//    vLayout1->setAlignment(Qt::AlignHCenter);
    for(int i=0;i<3;i++)
    {
        btn1[i] = new QToolButton;
        btn1[i]->setIcon(QIcon(QPixmap(pic1[i])));
        btn1[i]->setText("mike");
        btn1[i]->setIconSize(QSize(100,100));
        btn1[i]->setAutoRaise(true);

        btn1[i]->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vLayout1->addWidget(btn1[i]);
    }

    this->addItem(gBox1,"我的好友");

    QStringList pic2;
    pic2<<"://pic/4.jpg"<<"://pic/5.jpg"<<"://pic/6.jpg";

//    QGroupBox *gBox = new QGroupBox;
    QVBoxLayout *vLayout2 = new QVBoxLayout(&gBox2);
    for(int i=0;i<3;i++)
    {
        btn2[i] = new QToolButton;
        btn2[i]->setIcon(QIcon(QPixmap(pic2[i])));
        btn2[i]->setText("mike");
        btn2[i]->setIconSize(QSize(100,100));
        btn2[i]->setAutoRaise(true);
        btn2[i]->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vLayout2->addWidget(btn2[i]);
    }

    addItem(&gBox2,"陌生人");
}

Drawer::~Drawer()
{

}
