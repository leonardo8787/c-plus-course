#include "Multiplicacao.hpp"

    Multiplicacao::Multiplicacao(){}
    Multiplicacao::Multiplicacao(int numero1,int numero2){
        this->numero1=numero1;
        this->numero2=numero2;
    }
    void Multiplicacao::setNumero1(int numero1){
        this->numero1=numero1;
    }
    int Multiplicacao::getNumero1(){
        return this->numero1;
    }
    void Multiplicacao::setNumero2(int numero2){
        this->numero2=numero2;
    }
    int Multiplicacao::getNumero2(){
        return this->numero2;
    }
    void Multiplicacao::imprimemultiplicacao(){
        multiplicacao=numero1*numero2;
        cout<<"Resultado:";
        cout<<multiplicacao<<endl;
    }