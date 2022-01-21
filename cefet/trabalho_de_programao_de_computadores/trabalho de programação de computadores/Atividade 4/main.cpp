/*
Escreva em C++ uma classe Continente e depois crie um main para testá-lo. Um continente possui um nome e é composto por um conjunto de países. Identifique os atributos necessários e forneça os membros de classe a seguir:
a. Construtor que inicialize o nome do continente;
b. Um método que permita adicionar países aos continentes;
c. Um método que retorne a dimensão total do continente;
d. Um método que retorne a população total do continente;
e. Um método que retorne a densidade populacional do continente;
f. Um método que retorne o país com maior população no continente; <---
g. Um método que retorne o país com menor população no continente;
h. Um método que retorne o país de maior dimensão territorial no continente;
i. Um método que retorne o país de menor dimensão territorial no continente;
j. Um método que retorne a razão territorial do maior pais em relação ao menor país.

aluno: leonardo de oliveira campos
*/

#include "Continente.hpp"

int main(){
    
    string pais;
    int populacao, densidade, dimensao;
    string nome;
    
    Continente continente[3], metodos;
    
    cout << "Digite o nome do continente: " << endl;
    getline(cin,nome);
    metodos.setNomecont(nome);
    
    for(int i=0; i<3; i++){
        system("clear");
        cout << "Digite o nome do país: " << endl;
        getline(cin,pais);
        continente[i].setPaises(pais);
        cout << "Digite a população: " << endl;
        cin>>populacao;
        continente[i].setPopulacao(populacao);
        cout << "Digite a densidade demográfica do país: " << endl;
        cin>>densidade;
        continente[i].setDensidade(densidade);
        cout << "Digite Dimensão:" << endl;
        cin>>dimensao;
        continente[i].setDimensao(dimensao);
        cin.ignore();
    }
    
    cout << endl;
    cout << "Tamanho do continente: " << metodos.getDimensaototal(continente) << endl;
    cout << "População do continente: " << metodos.getPopulacaocontinente(continente) << endl;
    cout << "Densidade demográfica de continente: " << metodos.getDensidadeContinente(continente) << endl;
    cout << "Maior população do continente: " << endl;
    metodos.Maiorpopulacao(continente);
    cout << "Menor população do continente: " << endl;
    metodos.Menorpopulacao(continente);
    cout << "Maior densidade do continente: " << endl;
    metodos.Maiordensidade(continente);
    cout << "Menor densidade do continente: " << endl;
    metodos.Menordensidade(continente);
    cout << "Razão entre o maior país e o menor: " << metodos.getMaiormenor(continente) << endl;
    cout << endl;
    
    cout << "Fim" << endl;
    return 0;
}