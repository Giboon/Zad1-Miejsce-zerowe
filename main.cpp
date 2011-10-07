#include <iostream>
#include <bisectionsolver.h>

/*
  metoda rozwiazywanie
  */

using namespace std;

int main()
{
    double a,b,epsilon;
    cout << "Metoda bisekcji\nPodaj dane:\n\n";
    cout << "Początek przedziału a = "; cin >> a;
    cout << "Podaj koniec przedziału b = "; cin >> b;
    cout << "Podaj epsilon = "; cin >> epsilon;

    BisectionSolver solver;
    solver.setA(a);
    solver.setB(b);
    solver.setEpsilon(epsilon);
    solver.solve();

    cout << "Wartosc x = " << solver.xForResult();
    cout << "Wartosx funkcji w punkcie " << solver.result();
    cout << "Wartosc iteracji = " << solver.loops();
}
