#ifndef Medico_hpp
#define Medico_hpp

using namespace std;

#include "Pessoa.hpp"

#include<iostream>
#include<vector>
#include<string>

class Medico : public Pessoa{
    private:
        string crm, especialidade;
    public:
        // Medico();
    // 	Medico(string crm,string especialidade, string nome, char sexo, string endereco, int cpf, string telefone, string identidade);
    	void setCrm(string crm);
    	string getCrm();
    	void setEspecialidade(string especialidade);
    	string getEspecialidade();
};

#endif