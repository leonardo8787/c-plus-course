#ifndef Pessoajuridica_hpp
#define Pessoajuridica_hpp
#include "Pessoa.hpp"

using namespace std;

#include<iostream>

class Pessoajuridica : public Pessoa{
    private:
        string cnpj;
    public:
        Pessoajuridica();
        Pessoajuridica(string cnpj, string nome, string endereco);
        void setCnpj(string cnpj);
        string getCnpj();
};

#endif
