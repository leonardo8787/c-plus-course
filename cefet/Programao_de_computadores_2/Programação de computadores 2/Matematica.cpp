#include<iostream>
#include<math.h>
using namespace std;
#include "Matematica.hpp"

    Matematica::Matematica(){
        cout << "Calculadora" << endl;
    }    
    double Matematica::getResultado1(){
        return resultado1;
    }
    double Matematica::getResultado2(){
        return resultado2;
    }
    void Matematica::setNum1(double a){
        num1 = a;
    }
    double Matematica::getNum1(){
        return num1;
    }
    void Matematica::calcular(){
        resultado1 = (num1 - ((power(num1,3))/fatorial(3)) + ((power(num1,5))/fatorial(5)) - ((power(num1,7))/fatorial(7)) + ((power(num1,9))/fatorial(9)) - ((power(num1,11))/fatorial(11)) + ((power(num1,13))/fatorial(13)) - ((power(num1,15))/fatorial(15)) + ((power(num1,17))/fatorial(17)) - ((power(num1,19))/fatorial(19)) + ((power(num1,21))/fatorial(21)) );
        resultado2 = (1 - ((power(num1,2))/fatorial(2)) + ((power(num1,4))/fatorial(4)) - ((power(num1,6))/fatorial(6)) + ((power(num1,8))/fatorial(8)) - ((power(num1,10))/fatorial(10)) + ((power(num1,12))/fatorial(12)) - ((power(num1,14))/fatorial(14)) + ((power(num1,16))/fatorial(16)) - ((power(num1,18))/fatorial(18)) + ((power(num1,20))/fatorial(20)) );    
    }
    double Matematica::fatorial(double x){
        int j=x;
        for(int i=1;i<x;i++){
            j=(j*(x-i));
        }
        return j;
    }
    
    
    double Matematica::power (double i, double ow){
    if (ow > 1)
    {
         i = i * power (i, ow - 1);
    }
    return i;
    }
    