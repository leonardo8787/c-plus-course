#ifndef Consultorio_hpp
#define Consultorio_hpp

using namespace std;

#include "Medico.hpp"
#include "Paciente.hpp"
#include "Consulta.hpp"

#include<iostream>
#include<vector>
#include<string>

class Consultorio{
    private:
    	vector<Medico> medico;
    	vector<Paciente> paciente;
    	vector<Consulta> consulta;
    	string nome, endereco, telefone;
    public:
	    Consultorio();
		Consultorio(string nome, string endereco, string telefone, Medico m, Paciente p, Consulta c);
		void setNome(string nome);
		string getNome();
		void setEndereco(string endereco);
		string getEndereco();
		void setTelefone(string telefone);
		string getTelefone();

	    void imprimirListaDeMedicos();
	    
	    void cadastrarMedico(Medico m);

	    void imprimirListaDePacientes();
	    
	    void cadastrarPaciente(Paciente p);

	    void imprimirListaDeConsultas();
	    
	    void cadastrarConsulta(Consulta c);
};

#endif