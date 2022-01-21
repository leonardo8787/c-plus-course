#include "Pessoafisica.hpp"

Pessoafisica::Pessoafisica(){}
Pessoafisica::Pessoafisica(string cpf, string nome, string endereco): Pessoa(nome, endereco){
    this->cpf=cpf;
}
void Pessoafisica::setCpf(string cpf){
    this->cpf=cpf;
}
string Pessoafisica::getCpf(){
    return this->cpf;
}

void Pessoafisica::cadastrarPJ(Pessoajuridica pj){
    this->listaPJ.push_back(pj);
}
