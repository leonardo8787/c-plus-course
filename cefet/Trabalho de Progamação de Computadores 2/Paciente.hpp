#ifndef Paciente_hpp
#define Paciente_hpp

using namespace std;

#include <iostream>
#include <string>

class Paciente{
    private:
        string nome; 
        char sexo; 
        string endereco;
        float peso;
        string cpf;
        string cont;
    public:
        Paciente();
        void setNome(string nome);
        string getNome();
        void setSexo(char sexo);
        char getSexo();
        void setPeso(float peso);
        float getPeso();
        void setCpf(string cpf);
        string getCpf();
        void setEndereco(string endereco);
        string getEndereco();
        void imprime(Paciente vet[]);
};

#endif