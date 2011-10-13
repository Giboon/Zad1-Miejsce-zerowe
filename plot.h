#ifndef PLOT_H
#define PLOT_H

#include <gnuplot.hpp>
#include <vector>

/*
  klasa obsługująca rysującą wykresu
  tablicowanie funkcji (przekazać funkcje i zakadować na stale TODO - jak ??)
 */

class Plot
{
public:
    Plot(double m_a,double m_b);
    ~Plot();

    void hornerMe();
    void draw();
    void setMarkZeroOfFunction(double x,double y);
    void setMeta(string title,string method);

private:
    vector<double> xPoints,
                   yPoints;
    double m_xZero,
           m_yZero;
    string m_tittle,
           m_method;
};

#endif // PLOT_H
