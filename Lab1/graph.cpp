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
    int max = *(std::max_element(data.begin(), data.end()));
    int min = *(std::min_element(data.begin(),data.end()));
    int dx = widgetRect.width() / data.size();
    int dy_max = widgetRect.height() / max / 2;
    int dy_min = widgetRect.height() / std::abs(min) / 2;

    int mid = widgetRect.height() / 2;

    for (int i=0; i < data.size(); ++i)
    {
        painter.drawRect(i* dx, data[i] >= 0 ? mid - data[i] * dy_max: mid - data[i] * dy_min, dx, data[i] >= 0 ?data[i] * dy_max : data[i] * dy_min );
        QString str = QString::number(data[i]);
        painter.drawText( i * dx + dx / 2, data[i] >= 0 ? mid - dy_max / 2 : mid - dy_max / 2 + dy_max , str);
    }
}
