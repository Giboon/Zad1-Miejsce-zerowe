#ifndef PLOT_H
#define PLOT_H

#include <gnuplot.hpp>

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
