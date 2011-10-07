#ifndef BISECTIONSOLVER_H
#define BISECTIONSOLVER_H

//rozwiazuje podane rownanie uzywajac metody bisekcji
//dodać coś co będzie ładnie wybierało metodę do rozwiązania, ewentualnie do tworzenia ze stringa funkcji

#include <cmath>
#include <iostream>

using namespace std;

class BisectionSolver
{
public:
    BisectionSolver();

    double result() const;
    double xForResult() const;

    double a() const;
    double b() const;
    double epsilon() const;
    void setA(double a);
    void setB(double b);
    void setEpsilon(double eps);

    void solve();
    string error() const;
    signed int loops() const;

private:
    double m_a,m_b,     //a - poczatek przedzialu, b - koniec przedzialu
          m_result,     //wynik - x_0
          m_epsilon,
          m_xForResult;
    signed int m_loopCounter;
    double abs(double arg) const;
    double function1(double arg);
    double function2(double arg);
    double function3(double arg);
    string m_error;
};

#endif // BISECTIONSOLVER_H
