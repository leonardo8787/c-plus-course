/*
Fazer um programa que faz alguns cÃ¡lculos matemÃ¡ticos. O programa deve
atender Ã s seguintes especificaÃ§Ãµes.
a. Deve ser criada uma classe de nome Matematica
b. Essa classe deve possuir um atributo do tipo double chamado num1
c. O construtor padrÃ£o da classe deve inicializar nÃºmero com 0.
d. A classe deve possuir um construtor que recebe 1 nÃºmero double e atribui
os seus valores Ã s propriedades da classe.
e. A classe deve possuir mÃ©todos que atribuem e lÃªem os valores desses
atributos e cujos nomes (dos mÃ©todos) sÃ£o:
â€¢ double getNum1()
â€¢ void setNum1(double num1)
f. Dentro dessa classe devem ser implementados os mÃ©todos com a
assinatura abaixo:
â€¢ double sin()
i. Calcula o seno de num1. O seno de x pode ser calculado
pela sÃ©rie:
Considere que seu programa deve executar o cÃ¡lculo considerando os
10 primeiros elementos da sÃ©rie.
â€¢ double cos()
i. Calcula o coseno de num1. O coseno de x pode ser
calculado pela sÃ©rie:
Considere que seu programa deve executar o cÃ¡lculo considerando os
10 primeiros elementos da sÃ©rie.
Crie um main para testar o programa. O programa terÃ¡, entÃ£o, 3
arquivos (Matematica.hpp, Matematica.cpp, main.cpp).
*/

#include<iostream>
#include<math.h>
#include "Matematica.hpp"
using namespace std;

int main(){
    double num1;
    Matematica objeto;
    cout << "Digite um número: " << endl;
    cin >> num1;
    objeto.setNum1(num1);
    objeto.calcular();
    cout << objeto.getResultado1() << endl;
    cout << objeto.getResultado2() << endl;
    cout << "fim";
    return 0;
}