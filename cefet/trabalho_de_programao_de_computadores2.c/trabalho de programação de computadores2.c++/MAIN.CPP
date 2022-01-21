#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "ELEVADOR.HPP"


int main(){
    int andar, total, capacidade, quanto, x;
    elevador objeto;
    int c;
    
    cout << "Terreo" << endl;
    
    cout << "Digite o total de andares que o prédio tem: " << endl;
    cin >> total;
    objeto.setTotal(total);
    cout << "Digite qual andar o elevador se encontra: " << endl;
    cin >> andar;
    objeto.setAndar(andar);
    cout << "Digite a capacidade do elevador: " << endl;
    cin >> capacidade;
    objeto.setCapacidade(capacidade);
    cout << "Digite quantas pessoas têm no elevador: " << endl;
    cin >> quanto;
    objeto.setQuanto(quanto);
    
    cout << "Terraço em obras" << endl;
    
    c=quanto;
    
    do{
    system("clear");
    cout << endl;
    cout << "Total de pessoas no elevador: " << c;
    cout << endl;
    cout << "Andar: " << andar;
    cout << endl;
    cout << "Escolha:" << endl;
    cout << "1 - continuar, subir" << endl;
    cout << "2 - Continuar, descer" << endl;
    cout << "3 - Subir sem sasir ninguém" << endl;
    cout << "4 - Descer sem sair ninguém" << endl;
    cout << "5 - sair" << endl;
    cin >> x;
    switch(x){
        case 1:
            cout << "Continuar no elevador, subir";
            if(c < capacidade){
            c += 1;
                if(c>capacidade)
                    c -= 1;
                    if(andar<total)
                        andar += 1;
                            if(andar==total)
                                andar -= 1;
            }
            break;
        case 2:
            cout << "Continuar no elevador, descer";
            if(c > 1){ // já que o indivíduo ainda permanece no elevador
            c -= 1;
                if(andar>0)
                    andar -= 1;
                    if(andar==0)
                        andar += 1;
            }
            break;
        case 3: 
            cout << "Subir um andar sem sair pessoas";
            if(andar<total){
                andar += 1;
                if(andar==total)
                    andar = andar - 1;
            }
            break;
        case 4: 
            cout << "Descer um andar sem sair pessoas";
            if(andar<total){
                andar = andar - 1;
                if(andar==0)
                    andar = andar + 1;
            }
            break;
        case 5:
            cout << "Sair do elevador";
            break;
    }
    }while(x != 5);
    

    return 0;
}
