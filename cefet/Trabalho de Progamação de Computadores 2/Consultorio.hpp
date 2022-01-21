#ifndef Consultorio_hpp
#define Consultorio_hpp

using namespace std;

#include <iostream>
#include <string>

class Consultorio{
    private:
        string nome, endereco, medico;
        string telefone;
    public:
        Consultorio();
        void setNomeconsultorio(string nome);
        string getNomeescritorio();
        void setEnderecoconsultorio(string endereco);
        string getEnderecoconsultorio();
        void setTelefoneconsultorio(string telefone);
        string getTeleffoneconsultorio();
        void setMedico(string medico);
        string getMedico();
};

#endif