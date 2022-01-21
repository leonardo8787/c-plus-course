#ifndef Soma_hpp
#define Soma_hpp

using namespace std;

#include<iostream>

class Soma{
    private:
        int numero1, numero2, soma;
    public:
        Soma();
        Soma(int numero1,int numero2);
        void setNumero1(int numero1);
        int getNumero1();
        void setNumero2(int numero2);
        int getNumero2();
        void imprimesoma();
};

#endif