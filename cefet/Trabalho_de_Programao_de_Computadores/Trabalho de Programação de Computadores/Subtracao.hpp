#ifndef Subtracao_hpp
#define Subtracao_hpp

using namespace std;

#include<iostream>

class Subtracao{
    private:
        int numero1, numero2, subtracao;
    public:
        Subtracao();
        Subtracao(int numero1,int numero2);
        void setNumero1(int numero1);
        int getNumero1();
        void setNumero2(int numero2);
        int getNumero2();
        void imprimesubtracao();
};

#endif