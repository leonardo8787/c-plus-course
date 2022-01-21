#include "Funcionario.hpp"

    Funcionario::Funcionario(){
        setMatricula(0);
        setSalario(0);
    }
    Funcionario::Funcionario(int matricula, float salario, string nome, int telefone):Pessoa(nome, telefone){
        setMatricula(matricula);
        setSalario(salario);
    }
    void Funcionario::setMatricula(int matricula){
        this->matricula=matricula;
    }
    int Funcionario::getMatricula(){
        return this->matricula;
    }
    void Funcionario::setSalario(float salario){
        this->salario=salario;
    }
    float Funcionario::getSalario(){
        return this->salario;
    }