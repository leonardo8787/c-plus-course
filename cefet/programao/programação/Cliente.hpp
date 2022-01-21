#ifndef Cliente_hpp
#define Cliente_hpp

using namespace std;

#include<iostream>
#include "Pessoa.hpp"

class Cliente : public Pessoa{
    private:
        int codigo;
        string endereco;
    public:
        Cliente();
        Cliente(int codigo, string endereco, string nome, int telefone);
        
        void setCodigo(int codigo);
        int getCodigo();
        
        void setEndereco(string endereco);
        string getEndereco();
};

#endif