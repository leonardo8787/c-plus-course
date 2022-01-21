#include "Soma.hpp"

    Soma::Soma(){}
    Soma::Soma(int numero1,int numero2){
        this->numero1=numero1;
        this->numero2=numero2;
    }
    void Soma::setNumero1(int numero1){
        this->numero1=numero1;
    }
    int Soma::getNumero1(){
        return this->numero1;
    }
    void Soma::setNumero2(int numero2){
        this->numero2=numero2;
    }
    int Soma::getNumero2(){
        return this->numero2;
    }
    void Soma::imprimesoma(){
        soma=numero1+numero2;
        cout<<"Resultado:";
        cout<<soma<<endl;
    }