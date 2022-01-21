#include "Subtracao.hpp"

    Subtracao::Subtracao(){}
    Subtracao::Subtracao(int numero1,int numero2){
        this->numero1=numero1;
        this->numero2=numero2;
    }
    void Subtracao::setNumero1(int numero1){
        this->numero1=numero1;
    }
    int Subtracao::getNumero1(){
        return this->numero1;
    }
    void Subtracao::setNumero2(int numero2){
        this->numero2=numero2;
    }
    int Subtracao::getNumero2(){
        return this->numero2;
    }
    void Subtracao::imprimesubtracao(){
        subtracao=numero1-numero2;
        cout<<"Resultado:";
        cout<<subtracao<<endl;
    }