#include "Retangulo.hpp"

    Retangulo::Retangulo(){
        this->largura=largura;
        this->altura=altura;
    }
    
    void Retangulo::setLargura(int largura){
        this->largura=largura;
    }
    int Retangulo::getLargura(){
        return largura;
    }
    
    void Retangulo::setAltura(int altura){
        this->altura=altura;
    }
    int Retangulo::getAltura(){
        return altura;
    }
    
    void Retangulo::Imprime(){
        cout << "Aumenta altura: " << altura+1 << endl;
        cout << "Aumenta largura: " << largura+1 << endl;
        cout << "Diminui altura: " << altura-1 << endl;
        cout << "Diminui largura: " << largura-1 << endl;
        cout << "Largura do triângulo: " << largura << endl;
        cout << "Altura do triângulo: " << altura << endl;
        cout << "Perímetro: " << ((2*largura)+(2*altura)) << endl;
        cout << "Área: " << (largura*altura) << endl;
    }
    
    void Retangulo::setAltera_altura(int altera_altura){
        this->altera_altura=altera_altura;
    }
    int Retangulo::getAltera_altura(){
        return altera_altura;
    }
    void Retangulo::setAltera_largura(int altera_largura){
        this->altera_largura=altera_largura;
    }
    int Retangulo::getAltera_largura(){
        return altera_largura;
    }
    
    void Retangulo::Alterador(){
        cout << "Alterador de altura: " << altera_altura << endl;
        cout << "Alterador de largura: " << altera_largura << endl;
    }