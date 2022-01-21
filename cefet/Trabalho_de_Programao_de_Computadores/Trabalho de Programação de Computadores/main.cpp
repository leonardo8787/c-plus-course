/*
Implemente 4 classes com a finalidade de fazer uma calculadora simples
Implemente os métodos get e set 
Imprima todos os passos

aluno: Leonardo de Oliveira Campos
CEFET-MG
Campus V 
20/03/21
*/

#include "Soma.hpp"
#include "Subtracao.hpp"
#include "Divisao.hpp"
#include "Multiplicacao.hpp"

int main(){
    
    int num, num2, num3;
    
    Soma soma;
    Subtracao subtracao;
    Divisao divisao;
    Multiplicacao multiplicacao;
    
    do{
    cout<<"Calculadora"<<endl;
    cout<<endl;
    cout<<"Qual operação deseja fazer: "<<endl;
    cout<<"1 - soma"<<endl;
    cout<<"2 - subtração"<<endl;
    cout<<"3 - divisão"<<endl;
    cout<<"4 - multiplicação"<<endl;
    cout<<endl;
    cout<<"0 - sair"<<endl;
    cout<<endl;
    cin>>num;
    switch(num){
        case 0:
            return 0;
            break;
        case 1:
            cout<<"Soma"<<endl;
            cout<<"Digite dois números: "<<endl;
            cin>>num2;
            soma.setNumero1(num2);
            cin>>num3;
            soma.setNumero2(num3);
            soma.imprimesoma();
            cout<<"--------------------------------------"<<endl;
            break;
        case 2:
            cout<<"Subtração"<<endl;
            cout<<"Digite dois números: "<<endl;
            cin>>num2;
            subtracao.setNumero1(num2);
            cin>>num3;
            subtracao.setNumero2(num3);
            subtracao.imprimesubtracao();
            cout<<"--------------------------------------"<<endl;
            break;
        case 3:
            cout<<"Divisão Inteira"<<endl;
            cout<<"Digite dois números: "<<endl;
            cin>>num2;
            divisao.setNumero1(num2);
            cin>>num3;
            divisao.setNumero2(num3);
            divisao.imprimedivisao();
            cout<<"--------------------------------------"<<endl;
            break;
        case 4:
            cout<<"Multiplicação"<<endl;
            cout<<"Digite dois números: "<<endl;
            cin>>num2;
            multiplicacao.setNumero1(num2);
            cin>>num3;
            multiplicacao.setNumero2(num3);
            multiplicacao.imprimemultiplicacao();
            cout<<"--------------------------------------"<<endl;
            break;
    }
    
    }while(num != 0);
    
    cout<<"Fim"<<endl<<endl;
    
    return 0;
}
