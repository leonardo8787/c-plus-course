#ifndef __Continente_hpp
#define __Continente_hpp

#include <iostream>

using namespace std;

class Continente{
    private:
        string paises, continente;
        int populacao, densidade, dimensao;
        int cont, PopulacaoTotal, DensidadeTotal, DimensaoTotal;
        int max, min, maior, menor;
        float razao;
        string nome;
    public:
        Continente();
        void setNomecont(string nome);
        string getNomecont();
        void setPaises(string paises);
        string getPaises();
        void setPopulacao(int populacao);
        int getPopulacao();
        void setDensidade(int densidade);
        int getDensidade();
        void setDimensao(int dimensao);
        int getDimensao();
        int getDimensaototal(Continente vet[]);
        int getPopulacaocontinente(Continente vet[]);
        int getDensidadeContinente(Continente vet[]);
        void Maiorpopulacao(Continente vet[]);
        void Menorpopulacao(Continente vet[]);
        void Maiordensidade(Continente vet[]);
        void Menordensidade(Continente vet[]);
        float getMaiormenor(Continente vet[]);
};
#endif