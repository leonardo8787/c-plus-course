#ifndef Pessoa_hpp
#define Pessoa_hpp

using namespace std;

#include<iostream>

class Pessoa{
    protected:
        string nome, endereco;
    public:
        Pessoa();
        Pessoa(string nome, string endereco);
        void setNome(string nome);
        string getNome();
        void setEndereco(string endereco);
        string getEndereco();
};

#endif

