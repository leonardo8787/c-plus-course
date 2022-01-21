#include "Medico.hpp"

// 	Medico::Medico(){}
// 	Medico::Medico(string crm,string especialidade, string nome, char sexo, string endereco, int cpf, string telefone, string identidade) : Pessoa(nome,sexo, endereco, cpf, telefone, identidade){

// 	}
	void Medico::setCrm(string crm){
		this->crm=crm;
	}
	string Medico::getCrm(){
		return this->crm;
	}
	void Medico::setEspecialidade(string especialidade){
		this->especialidade=especialidade;
	}
	string Medico::getEspecialidade(){
		return this->especialidade;
	}