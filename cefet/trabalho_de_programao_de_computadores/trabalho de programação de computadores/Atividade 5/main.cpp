/*
Escreva uma classe para conter 2 membros do tipo float chamados largura e altura e chame de retângulo.
a. Crie um construtor que inicialize os dados com zero e outro construtor que inicialize os dados com um valor fixo.
b. Crie um método para solicitar os dados para o usuário.
c. Crie um método para imprimir os dados para o usuário.
d. Crie um método para validar os dados que estão sendo atualizados.      
e. Crie um método set para alterar a altura, não esqueça de validar os dados.
f. Crie um método set para alterar a largura, não esqueça de validar os dados.
g. Crie um método get para retornar a altura.
h. Crie um método get para retornar a largura.
i. Crie um método para incrementar a altura em 1.
j. Crie um método para incrementar a largura em 1.
k. Crie um método para decrementar a altura em 1.
l. Crie um método para decrementar a largura em 1.
m. Crie um método retornar o perímetro do retângulo.
n. Crie um método retornar a área do retângulo.
o. Crie um main para testar a classe criada.

aluno: leonardo de oliveira campos
*/

#include "Retangulo.hpp"

int main(){
    int altura, largura, altera_altura, altera_largura;
    
    Retangulo retangulo;
    
    do{
    cout << "Digite a altura: " << endl;
    cin>>altura;
    }while(altura <= 0);
    retangulo.setAltura(altura);
    do{
    cout << "Digite a largura: " << endl;
    cin>>largura;
    }while(altura <= 0);
    retangulo.setLargura(largura);
    
    cout << endl;
    cout << "Imprime os dados: " << endl;
    retangulo.Imprime();
    cout << endl;

    do{
    cout << "Altera altura: " << endl;
    cin >> altera_altura;
    }while(altera_altura <= 0);
    retangulo.setAltera_altura(altera_altura);
    do{
    cout << "Altera largura: " << endl;
    cin >> altera_largura;
    }while(altera_largura <= 0);
    retangulo.setAltera_largura(altera_largura);
    
    retangulo.Alterador();
    
    return 0;
}