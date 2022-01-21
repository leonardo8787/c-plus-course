#ifndef Pessoa_hpp
#define Pessoa_hpp

using namespace std;

#include<string>

class Pessoa{
    protected:
        string nome;
        int telefone;
    public:
        Pessoa();
        Pessoa(string nome, int telefone);
        void setNome(string nome);
        string getNome();
        void setTelefone(int telefone);
        int getTelefone();
};

#endif