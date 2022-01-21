#include "Consultorio.hpp"

    Consultorio::Consultorio(){
        
    }
    Consultorio::Consultorio(string nome, string endereco, string telefone, Medico m, Paciente p, Consulta c){
        cadastrarMedico(m);
        cadastrarPaciente(p);
        cadastrarConsulta(c);
    }
    void Consultorio::setNome(string nome){
        this->nome=nome;
    }
    string Consultorio::getNome(){
        return this->nome;
    }
    void Consultorio::setEndereco(string endereco){
        this->endereco=endereco;
    }
    string Consultorio::getEndereco(){
        return this->endereco;
    }
    void Consultorio::setTelefone(string telefone){
        this->telefone=telefone;
    }
    string Consultorio::getTelefone(){
        return this->telefone;
    }


    void Consultorio::imprimirListaDeMedicos(){
        int size = this->medico.size();
        
        cout << "\n===============" << endl;
        cout << "Medicos" << endl;
        cout << "===============" << endl;
        
        if (size == 0) {
            cout << "\nNão existe medicos cadastradas" << endl;
        } else {
            for(int i=0; i < size; i++) {
                cout << "Nome: " << this->medico[i].getNome() << endl;
            }
        }
    }
    
    void Consultorio::cadastrarMedico(Medico m){
        this->medico.push_back(m);
    }

    void Consultorio::imprimirListaDePacientes(){
        int size = this->paciente.size();
        
        cout << "\n===============" << endl;
        cout << "Pacientes" << endl;
        cout << "===============" << endl;
        
        if (size == 0) {
            cout << "\nNão existe pacientes cadastradas" << endl;
        } else {
            for(int i=0; i < size; i++) {
                cout << "Nome: " << this->paciente[i].getNome() << endl;
            }
        }
    }
    
    void Consultorio::cadastrarPaciente(Paciente p){
        this->paciente.push_back(p);
    }

    void Consultorio::imprimirListaDeConsultas(){
    int size = this->consulta.size();
        
    cout << "\n===============" << endl;
    cout << "Consultas" << endl;
    cout << "===============" << endl;
        
        if (size == 0) {
            cout << "\nNão existe consultas cadastradas" << endl;
        } else {
            for(int i=0; i < size; i++) {
                cout << "Data: " << this->consulta[i].getData() << endl;
                cout << "Hora: " << this->consulta[i].getHora() << endl;
            }
        }
    }
    
    void Consultorio::cadastrarConsulta(Consulta c){
        this->consulta.push_back(c);
    }