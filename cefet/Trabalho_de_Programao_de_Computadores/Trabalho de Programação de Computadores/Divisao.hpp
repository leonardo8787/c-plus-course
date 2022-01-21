#ifndef Divisao_hpp
#define Divisao_hpp

using namespace std;

#include<iostream>

class Divisao{
    private:
        int numero1, numero2;
        float divisao;
    public:
        Divisao();
        Divisao(int numero1,int numero2);
        void setNumero1(int numero1);
        int getNumero1();
        void setNumero2(int numero2);
        int getNumero2();
        void imprimedivisao();
};

#endif 