#include "Cliente.hpp"    
    
    Cliente::Cliente(){
        setCodigo(0);
        setEndereco("");
    }
    Cliente::Cliente(int codigo, string endereco, string nome, int telefone):Pessoa(nome, telefone){
        setCodigo(codigo);
        setEndereco(endereco);
    }
    
    void Cliente::setCodigo(int codigo){
        this->codigo=codigo;
    }
    int Cliente::getCodigo(){
        return this->codigo;
    }
    
    void Cliente::setEndereco(string endereco){
        this->endereco=endereco;
    }
    string Cliente::getEndereco(){
        return this->endereco;
    }