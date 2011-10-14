#include <iostream>
#include <bisectionsolver.h>

/*
  1 . dodac funkcja ktora stwierdzi ile jest miejsc zerowych
  */

using namespace std;

int main()
{
    double a,b,epsilon;
    cout << "Metoda bisekcji\nPodaj dane:\n\n";
    cout << "Poczatek przedzialu a = "; cin >> a;
    cout << "Podaj koniec przedzialu b = "; cin >> b;
    cout << "Podaj epsilon = "; cin >> epsilon;

    BisectionSolver solver;
    solver.setA(a);
    solver.setB(b);
    solver.setEpsilon(epsilon);

    solver.solve();

    if(!solver.error().empty()){
        cout << solver.error() << endl;
        return -1;
    }

    cout << "Wartosc x = " << solver.xForResult() <<  endl;
    cout << "Wartosx funkcji w punkcie " << solver.result() << endl;
    cout << "Wartosc iteracji = " << solver.loops() << endl;
}
