#ifndef __Matematica_hpp
#define __Matematica_hpp
#include<iostream>
#include<math.h>
using namespace std;

class Matematica{
    private:
        double num1;
        double resultado1, resultado2;
        int fat=1;
        //int n, m;
    public:
        Matematica();
        void setNum1(double a);
        double fatorial(double x);
        double getNum1();
        double getResultado1();
        double getResultado2();
        void calcular();
        double power (double i, double ow);
};

#endif 