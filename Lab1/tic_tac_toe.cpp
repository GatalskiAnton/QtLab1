#include "tic_tac_toe.h"


void Tic_tac_toe::paintEvent(QPaintEvent *event)
{
  Q_UNUSED(event);

    QRect widgetRect = this->rect();
    QPainter painter(this);
    QPen pen(Qt::blue, 2.5);
    QBrush brush(Qt::black);
    painter.setPen(pen);

    int dx = widgetRect.width() / 3;
    int dy = widgetRect.height() / 3;

    for (int i = 1; i < 3; ++i)
        painter.drawLine(i*dx,0,i*dx, widgetRect.height());

    for (int i = 1; i < 3; ++i)
        painter.drawLine(0,i*dy,widgetRect.width(), i*dy);


    for(int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            painter.drawText(i*dx + dx/2,j*dy + dy/2,"X");
        }
    }

}

