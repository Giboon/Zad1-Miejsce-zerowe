#ifndef PLOT_H
#define PLOT_H


/*
  klasa obsługująca rysującą wykresu
  tablicowanie funkcji (przekazać funkcje i zakadować na stale TODO - jak ??)
  */

#include <QList>

class Plot
{
public:
    Plot();
private:
    QList<double> xPoints;
};

#endif // PLOT_H
