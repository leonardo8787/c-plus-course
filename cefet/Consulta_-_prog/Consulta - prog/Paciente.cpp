#include "Paciente.hpp"

// 	Paciente::Paciente(){}
// 	Paciente::Paciente(string relato,string datault, string medicacao, string nome, char sexo, string endereco, int cpf, string telefone, string identidade) : Pessoa(nome,sexo, endereco, cpf, telefone, identidade){

// 	}
	void Paciente::setRelato(string relato){
		this->relato=relato;
	}
	string Paciente::getRelato(){
		return this->relato;
	}
	void Paciente::setDatault(string datault){
		this->datault=datault;
	}
	string Paciente::getDatault(){
		return this->datault;
	}
	void Paciente::setMedicacao(string medicacao){
		this->medicacao=medicacao;
	}
	string Paciente::getMedicacao(){
		return this->medicacao;
	}