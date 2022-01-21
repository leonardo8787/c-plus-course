#include "Item.hpp"

    Item::Item(){
        setItem(0);
        setDescricao("");
        setValor(0);
    }
    Item::Item(int codigo, string descricao, float valor){
        setItem(codigo);
        setDescricao(descricao);
        setValor(valor);
    }
    void Item::setItem(int codigo){
        this->codigo=codigo;
    }
    int Item::getItem(){
        return this->codigo;
    }
    void Item::setDescricao(string descricao){
        this->descricao=descricao;
    }
    string Item::getDescricao(){
        return this->descricao;
    }
    void Item::setValor(float valor){
        this->valor=valor;
    }
    float Item::getValor(){
        return this->valor;
    }