#include "Consultorio.hpp"

    Consultorio::Consultorio(){
        this->nome=nome;
        this->endereco=endereco;
        this->telefone=telefone;
        this->medico=medico;
    }
    void Consultorio::setNomeconsultorio(string nome){
        this->nome=nome;
    }
    string Consultorio::getNomeescritorio(){
        return this->nome;
    }
    void Consultorio::setEnderecoconsultorio(string endereco){
        this->endereco=endereco;
    }
    string Consultorio::getEnderecoconsultorio(){
        return this->endereco;
    }
    void Consultorio::setTelefoneconsultorio(string telefone){
        this->telefone=telefone;
    }
    string Consultorio::getTeleffoneconsultorio(){
        return this->telefone;
    }
    void Consultorio::setMedico(string medico){
        this->medico=medico;
    }
    string Consultorio::getMedico(){
        return  this->medico;
    }