///////////////////////////////////////////////////////////////////////////////
//
// Demonstracja rysowania wykresów przy użyciu programu Gnuplot za pośrednictwem
// prostego interfejsu gnuplot-cpp
//
// Autor                  : Jan Stolarek
//                          Instytut Informatyki Politechiniki Lodzkiej
// Kontakt z autorem      : jan.stolarek@p.lodz.pl
// Data ostatniej edycji  : 13-09-2011
// Licencja               : WTFPL v2.0
//
// Wymagania:
//   - gnuplot (http://www.gnuplot.info/), licencja: Freeware
//   - gnuplot-cpp (http://code.google.com/p/gnuplot-cpp/), licencja GPL v2
//
// Poniższy tutorial demonstruje podstawowe możliwosci interfejsu gnuplot-cpp.
// Pełen spis funkcji można znalezc na stronie:
// http://jfi.uchicago.edu/~tcaswell/track_doc/classgnuplot_1_1Gnuplot.html
// Szczególnie użyteczna może okazać się funkcja Gnuplot::cmd( const std::string
// &cmdstr) - pozwala ona na wysłanie polecenia bezpośrednio do programu gnuplot,
// który posiada znacznie bardziej rozbudowane możliwosci, niż te udostępniane
// przez gnuplot-cpp, który jest jedynie prostą nakładką na program gnuplot (takich
// nakladek mozna znaleźć w sieci znacznie więcej). Zachęcam rowniez do analizy
// pliku "gnuplot_i.hpp" - pomimo dużej ilosci kodu nie jest on skomplikowany.
// Bardziej rozbudowany przyklad można znaleźć ściagając gnuplot-cpp ze strony
// podanej powyżej. Przykład ten można również obejrzeć tutaj:
// http://sites.google.com/site/bettereaclone/introduction/gnuplot/c-example-gnuplot-1
//
///////////////////////////////////////////////////////////////////////////////

#include "gnuplot.hpp"

// Jeżeli zmienna żrodowiskowa wskazująca ścieżkę do gnuplot nie jest zdefiniowana
// to trzeba ją podać. Pod linuksem nie trzeba tego robić, a pod Windowsem,
// w zależności od tego gdzie jest zainstalowany gnuplot, np:
//#define GNUPLOT_PATH "C:/program files/gnuplot/bin/"

using namespace std;

int main() {
// Odkomentować poniższą linię, jeżeli definiowana była ścieżka do gnuplota
//   Gnuplot::set_GNUPlotPath( GNUPLOT_PATH );

  Gnuplot main_plot;

  // Podpisy na wykresie, żeby było wiadomo co na nim widać
  main_plot.set_title( "tytul wykresu" );
  main_plot.set_xlabel( "podpis osi odcietych" );
  main_plot.set_ylabel( "podpis osi rzednych" );

  // styl rysowania wykresu
  main_plot.set_style( "lines" );

  // siatka poprawia czytelność
  main_plot.set_grid();

  // zakres osi x
  main_plot.set_xrange( 0 , 6 ) ;

  // funkcja do narysowania
  main_plot.plot_equation( "sin(x)", "opcjonalnie podpis w legendzie" ) ;

  // teraz narsujemy kilka punktów. Na początek zmiana stylu rysowania:
  main_plot.set_style( "points" );
  main_plot.set_pointsize( 2.0 );

  // Tworzenie danych do wykresu. Potrzebne są dwa wektory STL. Jeden opisuje
  // położenie punktow na osi X, drugi na osi Y. W rzeczywistym programie
  // dane nie będą oczywiście wpisywane na sztywno w kodzie, a wyliczane w oparciu
  // o parametry wprowadzone przez użytkownika.
  vector<double> x( 3 );
  x[ 0 ] = 0.5;
  x[ 1 ] = 3.0;
  x[ 2 ] = 4.0;
  vector<double> y ( 3 );
  y[ 0 ] =  0.7;
  y[ 1 ] =  0.2;
  y[ 2 ] = -0.4;
  main_plot.plot_xy( x, y, "podpis - opcjonalnie" );

  // czekamy na naciśniecie klawisza Enter
  getchar();
  return 0;
}
