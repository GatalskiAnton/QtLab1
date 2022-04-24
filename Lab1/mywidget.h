#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <fstream>

class MyWidget : public QWidget
{
 Q_OBJECT
public:
 MyWidget(QWidget *parent = nullptr)
 {
     for (int i = 0; i < 10; ++i)
     data.push_back(i);
 }
 ~MyWidget() {};
protected:
 void paintEvent(QPaintEvent *event);
private:
 std::vector<int> data;
};


#endif // MYWIDGET_H
