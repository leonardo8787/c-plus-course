#ifndef Paciente_hpp
#define Paciente_hpp

using namespace std;

#include "Pessoa.hpp"

#include<iostream>
#include<vector>
#include<string>

class Paciente : public Pessoa{
    private:
    	string relato, datault, medicacao;
    public:
	   // Paciente();
// 		Paciente(string relato,string datault, string medicacao, string nome, char sexo, string endereco, int cpf, string telefone, string identidade);
		void setRelato(string relato);
		string getRelato();
		void setDatault(string datault);
		string getDatault();
		void setMedicacao(string medicacao);
		string getMedicacao();
};

#endif