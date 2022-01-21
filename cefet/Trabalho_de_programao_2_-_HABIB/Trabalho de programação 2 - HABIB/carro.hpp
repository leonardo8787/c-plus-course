#ifndef __carro_hpp
#define __carro_hpp
#include<iostream>
#include<string>
using namespace std;

class Carro{
    
    public:
    void setNome(string a);
    string getNome();
    void setCombustivel(int b);
    int getCombustivel();
    void setDistancia(int c);
    int getDistancia();
    void setConsumo(int d);
    float getConsumo();
    
    private:
    string nome;
    int combustivel;
    int distancia;
    float consumo;
    
};

#endif 
