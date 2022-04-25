#include "graph.h"

void Graph::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QRect widgetRect = this->rect();
    QPainter painter(this);
    QPen pen(Qt::blue, 2.5);
    QBrush brush(Qt::gray);
    painter.setPen(pen);

    painter.setBrush(brush);
    int max = std::max(std::abs(*(std::min_element(data.begin(), data.end()))),*(std::max_element(data.begin(), data.end())));
    int dx = widgetRect.width() / data.size();
    int dy = widgetRect.height() / max / 2;


    int mid = widgetRect.height() / 2;

    for (int i=0; i < data.size(); ++i)
    {
    painter.drawRect(i* dx, mid - data[i] * dy, dx, data[i] * dy);
    QString str = QString::number(data[i]);
    painter.drawText( i * dx + dx / 2 - 5, mid - data[i] * dy / 2, str);
    }
}
