#ifndef Pessoafisica_hpp
#define Pessoafisica_hpp

#include<iostream>
#include<vector>

#include "Pessoa.hpp"
#include "Pessoajuridica.hpp"

using namespace std;

class Pessoafisica : public Pessoa{
    private:
        string cpf;
        vector<Pessoajuridica> listaPJ;
    public:
        Pessoafisica();
        Pessoafisica(string cpf,string nome,string endereco);
        void setCpf(string cpf);
        string getCpf();
        
        void cadastrarPJ(Pessoajuridica pj);
};

#endif
