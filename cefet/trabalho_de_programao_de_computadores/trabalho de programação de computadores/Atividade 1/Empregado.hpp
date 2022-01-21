#ifndef __Empregado_hpp
#define __Empregado_hpp

#include<iostream>
#include<string>

using namespace std;

class Empregado{
    private:
        string nome, sobrenome;
        float salario;
    public:
        Empregado();
        void setNome(string nome);
        string getNome();
        void setSobrenome(string sobrenome);
        string getSobrenome();
        void setSalario(float salario);
        float getSalario();
        void salarioanual(Empregado vet[]);
        void reajuste(Empregado vet[]);
};

#endif