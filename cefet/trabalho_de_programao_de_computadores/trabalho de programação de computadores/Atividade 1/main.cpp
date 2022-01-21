/*
A fim de representar empregados em uma firma, crie uma classe chamada Empregado que inclui as três informações a seguir como atributos:  
•um primeiro nome,
•um sobrenome, e
•um salário mensal. 
Sua classe deve ter um construtor que inicializa os três atributos. 
Forneça um método set e get para cada atributo. 
Se o salário mensal não for positivo, configure-o como 0.0. 
Escreva um main de teste que teste todas as funcionalidades dessa classe. 
Crie duas instâncias da classe e exiba o  salário  anual  de  cada  instância.  
Então  dê  a  cada  empregado  um  aumento  de  10%  e  exiba novamente o salário anual de cada empregado.

aluno: leonardo de oliveira campos
*/

#include "Empregado.hpp"

int main(){
    string nome, sobrenome;
    float salario;
    
    Empregado empregado[3], metodo;
    
    for(int i=0; i<3; i++){
        system("clear");
        cout << i+1 << "° empregado" << endl;
        cout << "Digite o primeiro nome do empregado: " << endl;
        getline(cin,nome);
        empregado[i].setNome(nome);
        cout << "Digite um sobrenome: " << endl;
        getline(cin,sobrenome);
        empregado[i].setSobrenome(sobrenome);
        cout << "Digite o Salário do empregado: " << endl;
        cin >> salario;
        if(salario < 0){
            salario = 0.0;
        }
        empregado[i].setSalario(salario);
        cin.ignore();
    }
    
    cout << "Salário anual: " << endl;
    metodo.salarioanual(empregado);
    cout << "Salários reajustados, em ordem: " << endl;
    metodo.reajuste(empregado);
    
    cout << "Fim";
    return 0;
}