#include "Pessoa.hpp"

    Pessoa::Pessoa(){
        setNome("");
        setTelefone(0);
    }
    Pessoa::Pessoa(string nome, int telefone){
        setNome(nome);
        setTelefone(telefone);
    }
    void Pessoa::setNome(string nome){
        this->nome=nome;
    }
    string Pessoa::getNome(){
        return this->nome;
    }
    void Pessoa::setTelefone(int telefone){
        this->telefone=telefone;
    }
    int Pessoa::getTelefone(){
        return this->telefone;
    }