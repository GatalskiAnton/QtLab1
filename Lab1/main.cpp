#include "mywidget.h"
#include "graph.h"
#include "tic_tac_toe.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Graph gr;
    gr.show();
    MyWidget w;
    w.show();

    Tic_tac_toe tk;
    tk.show();
    tk.resize(300,300);

    return a.exec();
}
