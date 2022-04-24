#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <QWidget>
#include <QPainter>

class Tic_tac_toe : public QWidget
{
 Q_OBJECT
public:
 Tic_tac_toe(QWidget *parent = nullptr)
 {

 }
 ~Tic_tac_toe() {};
protected:
 void paintEvent(QPaintEvent *event);
private:
 std::vector<std::vector<int>> data = {
     {1,0,-1},
     {0,1,-1},
     {1,-1,0}
 };
};

QString sign(int element);
#endif // TIC_TAC_TOE_H
