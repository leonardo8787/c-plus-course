#ifndef Item_hpp
#define Item_hpp

using namespace std;

#include<iostream>

class Item{
    private:
        int codigo;
        string descricao;
        float valor;
    public:
        Item();
        Item(int codigo, string descricao, float valor);
        void setItem(int codigo);
        int getItem();
        void setDescricao(string descricao);
        string getDescricao();
        void setValor(float valor);
        float getValor();
};

#endif