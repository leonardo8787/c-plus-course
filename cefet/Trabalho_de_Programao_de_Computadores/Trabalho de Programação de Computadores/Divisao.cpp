#include "Divisao.hpp"
    
    Divisao::Divisao(){}
    Divisao::Divisao(int numero1,int numero2){
        this->numero1=numero1;
        this->numero2=numero2;
    }
    void Divisao::setNumero1(int numero1){
        this->numero1=numero1;
    }
    int Divisao::getNumero1(){
        return this->numero1;
    }
    void Divisao::setNumero2(int numero2){
        this->numero2=numero2;
    }
    int Divisao::getNumero2(){
        return this->numero2;
    }
    void Divisao::imprimedivisao(){
        divisao=(numero1 % numero2);
        cout<<"Resultado:";
        cout<<divisao<<endl;
    }
