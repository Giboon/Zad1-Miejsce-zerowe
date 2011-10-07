#ifndef PLOT_H
#define PLOT_H

/*
  klasa obsługująca rysującą wykresu
  */

#include <QList>

class Plot
{
public:
    Plot();
private:
    QList<qreal> xPoints;
    //musi być dodana tutaj funkcja którą liczymy, żeby liczyć yPoints
};

#endif // PLOT_H
