#include "Pessoajuridica.hpp"

    Pessoajuridica::Pessoajuridica(){}
    Pessoajuridica::Pessoajuridica(string cnpj, string nome, string endereco): Pessoa(nome, endereco){
        this->cnpj=cnpj;
    }
    void Pessoajuridica::setCnpj(string cnpj){
        this->cnpj=cnpj;
    }
    string Pessoajuridica::getCnpj(){
        return this->cnpj;
    }
