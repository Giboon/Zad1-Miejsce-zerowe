#include "plot.h"

Plot::Plot(double begin, double end){
    m_a = begin;
    m_b = end;
}

void Plot::hornerMe(){

}

double Plot::function1(double arg){
    return 3*arg+sin(arg)-exp(arg);
}

double Plot::function2(double arg){
    return pow(3,arg)-arg+1;
}

double Plot::function3(double arg){
    return 2*exp(-arg)-sin(arg);
}
