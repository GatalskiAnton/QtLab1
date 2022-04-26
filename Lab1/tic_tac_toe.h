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
     for (int i = 0; i < 3; i++)
         {
             std::vector<int> vec;
             for (int j = 0; j < 3; j++)
                 vec.push_back(rand() % 3 - 1);
             data.push_back(vec);
         }
 }
 ~Tic_tac_toe() {};
protected:
 void paintEvent(QPaintEvent *event);
private:
 std::vector<std::vector<int>> data;
};

QString sign(int element);
#endif // TIC_TAC_TOE_H
