#ifndef Funcionario_hpp
#define Funcionario_hpp

using namespace std;

#include<iostream>
#include "Pessoa.hpp"

class Funcionario : public Pessoa{
    private:
        int matricula;
        float salario;
    public:
        Funcionario();
        Funcionario(int matricula, float salario, string nome, int telefone);
        void setMatricula(int matricula);
        int getMatricula();
        void setSalario(float salario);
        float getSalario();
};

#endif 