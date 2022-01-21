#ifndef Venda_hpp
#define Venda_hpp

using namespace std;

#include<iostream>
#include<string>
#include<vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Item.hpp"

class Venda{
    private:
        vector<Cliente> cliente;
        vector<Item> item;
        Funcionario funcionario;
        int id;
        string local_entrega, data_entrega, referencia;
        float total_venda;
    public:
        Venda();
        Venda(Cliente c, Funcionario f, Item i);
        
        void setId(int id);
        int getId();
        
        void setLocalentrega(string local_entrega);
        string getLocalentrega();
        
        void setDataentrega(string data_entrega);
        string getDataentrega();
        
        void setReferencia(string referencia);
        string getReferencia();
        
        void setTotalvenda(float totalvenda);
        float getTotalvenda();
        
        void imprimirListaDeCliente();
        void cadastrarCliente(Cliente c);
        
        void cadastrarFuncionario(Funcionario f);
        void imprimirFuncionario();
        
        void imprimirListaDeItem();
        void cadastrarItem(Item i);
};

#endif