#include "Pessoa.hpp"

    Pessoa::Pessoa(){}
    Pessoa::Pessoa(string nome, string endereco){
        this->nome=nome;
        this->endereco=endereco;
    }
    void Pessoa::setNome(string nome){
        this->nome=nome;
    }
    string Pessoa::getNome(){
        return this->nome;
    }
    void Pessoa::setEndereco(string endereco){
        this->endereco=endereco;
    }
    string Pessoa::getEndereco(){
        return this->endereco;
    }

