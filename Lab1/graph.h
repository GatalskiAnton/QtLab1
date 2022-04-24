#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QPainter>

class Graph : public QWidget
{
    Q_OBJECT
public:
explicit Graph(QWidget *parent = nullptr)
    {
         for(int i = 0; i < 11;++i)
             data.push_back(i - 6);
    };
    ~Graph() {};
protected:
    void paintEvent(QPaintEvent *event);
private:
    std::vector<int> data;
};

#endif // GRAPH_H
