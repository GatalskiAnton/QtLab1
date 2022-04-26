#include "mywidget.h"
#include "graph.h"
#include "tic_tac_toe.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MyWidget w;
//    w.show();

//    Graph gr;
//    gr.show();

    Tic_tac_toe tc;
    tc.show();
    tc.resize(300,300);

    return a.exec();
}
