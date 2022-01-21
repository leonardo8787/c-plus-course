#include "Pessoa.hpp"

    Pessoa::Pessoa(){}
    Pessoa::Pessoa(string nome, char sexo, string endereco, string cpf, string telefone, string identidade){
        
    }
    void Pessoa::setNome(string nome){
        this->nome=nome;
    }
    string Pessoa::getNome(){
        return this->nome;
    }
    void Pessoa::setSexo(char sexo){
        this->sexo=sexo;
    }
    char Pessoa::getSexo(){
        return this->sexo;
    }
    void Pessoa::setEndereco(string endereco){
        this->endereco=endereco;
    }
    string Pessoa::getEndereco(){
        return this->endereco;
    }
    void Pessoa::setCpf(int cpf){
        this->cpf=cpf;
    }
    int Pessoa::getCpf(){
        return this->cpf;
    }
    void Pessoa::setTelefone(string telefone){
        this->telefone=telefone;
    }
    string Pessoa::getTelefone(){
        return this->telefone;
    }
    void Pessoa::setIdentidade(string identidade){
        this->identidade=identidade;
    }
    string Pessoa::getIdentidade(){
        return this->identidade;
    }