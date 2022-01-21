#ifndef Pessoa_hpp
#define Pessoa_hpp

using namespace std;

#include<iostream>
#include<vector>
#include<string>

class Pessoa{
    protected:
        string nome, endereco, telefone, identidade;
        char sexo;
        int cpf;
    public:
        Pessoa();
        Pessoa(string nome, char sexo, string endereco, string cpf, string telefone, string identidade);
        void setNome(string nome);
        string getNome();
        void setSexo(char sexo);
        char getSexo();
        void setEndereco(string endereco);
        string getEndereco();
        void setCpf(int cpf);
        int getCpf();
        void setTelefone(string telefone);
        string getTelefone();
        void setIdentidade(string identidade);
        string getIdentidade();
};

#endif