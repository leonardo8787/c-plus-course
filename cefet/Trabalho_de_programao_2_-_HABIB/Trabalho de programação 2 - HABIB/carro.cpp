#include<iostream>
#include "carro.hpp"
#include<string>

using namespace std;

    void Carro::setNome(string a){
        this->nome = a;
    }
    string Carro::getNome(){
        return nome;
    }
    void Carro::setCombustivel(int b){
        this->combustivel = b;
    }
    int Carro::getCombustivel(){
        return combustivel;
    }
    void Carro::setDistancia(int c){
        this->distancia = c;
    }
    int Carro::getDistancia(){
        return distancia;
    }
    void Carro::setConsumo(int d){
        this->consumo = d;
    }
    float Carro::getConsumo(){
        return consumo;
    }

