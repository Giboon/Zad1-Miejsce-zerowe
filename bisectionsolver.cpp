#include "bisectionsolver.h"

BisectionSolver::BisectionSolver() :
    m_loopCounter(0){
}

void BisectionSolver::setA(double a){
    m_a = a;
}

void BisectionSolver::setB(double b){
    m_b = b;
}

void BisectionSolver::setEpsilon(double eps){
    m_epsilon = eps;
}

double BisectionSolver::epsilon() const{
    return m_epsilon;
}

double BisectionSolver::a() const{
    return m_a;
}

double BisectionSolver::b() const{
    return m_b;
}

double BisectionSolver::result() const{
    return m_result;
}

void BisectionSolver::solve(){
    if((m_a < 0 && m_b > 0) || (m_a > 0 && m_b < 0)){
        double middle = this->abs(m_a - m_b)/2;
        while(this->abs(m_a-m_b) >= m_epsilon){
            //domyslnie funkcja 1
            if(function1(m_a) * function1(middle) < 0){
                m_b = middle;
            }else{
                m_a = middle;
            }
            m_loopCounter++;
        }
        m_result = function1(middle);
        m_xForResult = middle;
    }else{
        m_error = "Wrong boundaries";
    }
}

string BisectionSolver::error() const{
    return m_error;
}

signed int BisectionSolver::loops() const{
    return m_loopCounter;
}

double BisectionSolver::abs(double arg) const{
    if(arg < 0){
        return arg*(-1);
    }
    return arg;
}

double BisectionSolver::function1(double arg){
    return 3*arg+sin(arg)-exp(arg);
}

double BisectionSolver::function2(double arg){
    return pow(3,arg)-arg+1;
}

double BisectionSolver::function3(double arg){
    return 2*exp(-arg)-sin(arg);
}
