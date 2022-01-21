#ifndef __Retangulo_hpp
#define __Retangulo_hpp

#include <iostream>

using namespace std;

class Retangulo{
    private:
        int altura, largura;
        int aumenta, decrementa;
        int altera_altura, altera_largura;
    public:
        Retangulo();
        void setLargura(int largura);
        int getLargura();
        void setAltura(int altura);
        int getAltura();
        void Imprime();
        void setAltera_altura(int altera_altura);
        int getAltera_altura();
        void setAltera_largura(int altera_largura);
        int getAltera_largura();
        void Alterador();
};

#endif