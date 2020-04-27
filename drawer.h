#ifndef DRAWER_H
#define DRAWER_H

#include <QToolBox>
#include <QToolButton>
#include <QVBoxLayout>
#include <QGroupBox>
class Drawer : public QToolBox
{
    Q_OBJECT

public:
    QToolButton *btn1[3];
    QToolButton *btn2[3];
    QGroupBox gBox2;
    Drawer(QWidget *parent = 0,Qt::WindowFlags f=0);
    ~Drawer();
};

#endif // DRAWER_H
