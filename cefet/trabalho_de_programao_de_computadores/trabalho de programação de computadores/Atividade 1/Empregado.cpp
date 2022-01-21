#include "Empregado.hpp"

    Empregado::Empregado(){
        this->nome=nome;
        this->sobrenome=sobrenome;
        this->salario=salario;
    }
    void Empregado::setNome(string nome){
        this->nome=nome;
    }
    string Empregado::getNome(){
        return nome;
    }
    void Empregado::setSobrenome(string sobrenome){
        this->sobrenome=sobrenome;
    }
    string Empregado::getSobrenome(){
        return sobrenome;
    }
    void Empregado::setSalario(float salario){
        this->salario=salario;
    }
    float Empregado::getSalario(){
        return salario;
    }
    
    void Empregado::salarioanual(Empregado vet[]){
        float aux;
        for(int i=0; i<3; i++){
            salario=vet[i].getSalario();
            aux = (salario*12);
            cout << i+1 << "° salario: " << aux << endl;
        }
    }
    
    void Empregado::reajuste(Empregado vet[]){
        float aux;
        for(int i=0; i<3; i++){
            salario=vet[i].getSalario();
            aux = (salario*1.10);
            cout << i+1 << "° salario: " << aux << endl;
        }
    }