#ifndef Multiplicacao_hpp 
#define Multiplicacao_hpp

using namespace std;

#include <iostream>

class Multiplicacao{
    private:
        int numero1, numero2, multiplicacao;
    public:
        Multiplicacao();
        Multiplicacao(int numero1,int numero2);
        void setNumero1(int numero1);
        int getNumero1();
        void setNumero2(int numero2);
        int getNumero2();
        void imprimemultiplicacao();
};

#endif