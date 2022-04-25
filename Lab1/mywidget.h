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
     std::ifstream file("input.txt");
     std::string str;

     while (file >> str)
             data.push_back(stoi(str));
 }
 ~MyWidget() {};
protected:
 void paintEvent(QPaintEvent *event);
private:
 std::vector<int> data;
};


#endif // MYWIDGET_H
