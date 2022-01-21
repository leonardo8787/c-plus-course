#include "Paciente.hpp"

        Paciente::Paciente(){
            this->nome=nome;
            this->sexo=sexo;
            this->peso=peso;
            this->cpf=cpf;
            this->endereco=endereco;
        }
        void Paciente::setNome(string nome){
            this->nome=nome;
        }
        string Paciente::getNome(){
            return this->nome;
        }
        void Paciente::setSexo(char sexo){
            this->sexo=sexo;
        }
        char Paciente::getSexo(){
            return this->sexo;
        }
        void Paciente::setPeso(float peso){
            this->peso=peso;
        }
        float Paciente::getPeso(){
            return this->peso;
        }
        void Paciente::setCpf(string cpf){
            this->cpf=cpf;
        }
        string Paciente::getCpf(){
            return this->cpf;
        }
        void Paciente::setEndereco(string endereco){
            this->endereco=endereco;
        }
        string Paciente::getEndereco(){
            return this->endereco;
        }
        
        void Paciente::imprime(Paciente vet[]){
            for(int i=0; i<3 ; i++){
                cont = vet[i].getNome();
                cout << cont << endl;
            }
        }