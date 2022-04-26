#include "tic_tac_toe.h"

QString sign(int element)
{
    if(element == -1)
        return "";
    if(element == 0)
        return "0";
    return "X";
}

void Tic_tac_toe::paintEvent(QPaintEvent *event)
{

    QRect table = this->rect();
    QPainter painter(this);
    QPen pen(QColor(94, 159, 210), 3);
    QBrush brush(Qt::black);
    painter.setPen(pen);

    int dx = table.width() / 3;
    int dy = table.height() / 3;

    for (int i = 1; i < 3; ++i)
    {
        painter.drawLine(i*dx,0,i*dx, table.height());
        painter.drawLine(0,i*dy,table.width(), i*dy);
    }
    int size = table.height() / 10;
    painter.setFont(QFont("times",size));

    for(int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            painter.drawText(i*dx + dx/2 - size / 2,j*dy + dy/2 + size / 2 ,sign(data[j][i]));
    }
}

