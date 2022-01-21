#include "Continente.hpp"

    Continente::Continente(){
        
    }
    void Continente::setNomecont(string nome){
        this->nome=nome;
    }
    string Continente::getNomecont(){
        return nome;
    }
    
    void Continente::setPaises(string paises){
        this->paises=paises;
    }
    string Continente::getPaises(){
        return paises;
    }
    
    void Continente::setPopulacao(int populacao){
        this->populacao=populacao;
    }
    int Continente::getPopulacao(){
        return populacao;
    }
    
    void Continente::setDensidade(int densidade){
        this->densidade=densidade;
    }
    int Continente::getDensidade(){
        return densidade;
    }
    void Continente::setDimensao(int dimensao){
        this->dimensao=dimensao;
    }
    int Continente::getDimensao(){
        return dimensao;
    }
    
    int Continente::getDimensaototal(Continente vet[]){
        cont=0;
        for(int i=0; i<3; i++){
            DimensaoTotal=vet[i].getDimensao();
            cont = (cont+DimensaoTotal);
        }
        return cont;
    }
    

    int Continente::getPopulacaocontinente(Continente vet[]){
        cont=0;
        for(int i=0; i<3; i++){
            PopulacaoTotal=vet[i].getPopulacao();
            cont = (cont+PopulacaoTotal);
        }
        return cont;
    }
    

    int Continente::getDensidadeContinente(Continente vet[]){
        cont=0;
        for(int i=0; i<3; i++){
            DensidadeTotal=vet[i].getDensidade();
            cont = (cont+DensidadeTotal);
        }
        return cont;
    }
    
    void Continente::Maiorpopulacao(Continente vet[]){
        cont=0;
        maior=0;
        for(int i=0; i<3; i++){
            max = vet[i].getPopulacao();
            if(max > maior){
                maior = max;
            }
        }
        cout << maior << endl;
    }
    
    void Continente::Menorpopulacao(Continente vet[]){
        cont=0;
        menor=10000000000000000000000000;
        for(int i=0; i<3; i++){
            max = vet[i].getPopulacao();
            if(max < menor){
                menor = max;
            }
        }
        cout << menor << endl;
    }
    
    void Continente::Maiordensidade(Continente vet[]){
        cont=0;
        maior=0;
        for(int i=0; i<3; i++){
            max = vet[i].getDensidade();
            if(max > maior){
                maior = max;
            }
        }
        cout << maior << endl;
    }
    
    void Continente::Menordensidade(Continente vet[]){
        cont=0;
        menor=10000000000000000000000000;
        for(int i=0; i<3; i++){
            max = vet[i].getDensidade();
            if(max < menor){
                menor = max;
            }
        }
        cout << menor << endl;
    }
    
    
    float Continente::getMaiormenor(Continente vet[]){
        cont=0;
        maior=0;
        menor=10000000000000000000000000;
        for(int i=0; i<3; i++){
            max = vet[i].getDimensao();
            if(max > maior){
                maior = max;
            }
            if(max < menor){
                menor = max;
            }
        }
        razao = (maior/menor);
        
        return razao;
    }