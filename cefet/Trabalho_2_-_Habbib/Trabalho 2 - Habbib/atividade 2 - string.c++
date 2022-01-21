/*
Faça um programa que leia um vetor de 15 posições com números inteiros. Crie,
a seguir. um vetor resultante que contenha todos os números primos do vetor
digitado. Escreva o vetor resultante.
Aluno: Leonardo de Oliveira Campos
*/

#include<iostream>
#include <stdio.h>
using namespace std;

main (void){

    int num,res,par=0,imp=0;
    int vet[15];

    cout << "Digite 15 números";
    cout << endl;
    for(num=0;num<15;num++)
        cin >> num;

    cout << endl;
    cout << "Números ímpares: ";

    for(num=0;num<15;num++){
        res=num%2;
            if(res==0){
                par++;
            } else {
                cout << " " << num;
                imp++;
            }
    }

    cout << endl;
    cout << endl;

    cout << "n° Pares: " << par << endl;
    cout << "n° Impares: " << imp << endl;

    system("pause");
    return 0;
    }
