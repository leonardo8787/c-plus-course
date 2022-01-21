/*
Crie uma classe para representar datas. 
a.Represente uma data usando três atributos: o dia, o mês, e o ano.
b.Sua  classe  deve  ter  um  construtor  que  inicializa  os  três  atributos  e  verifica  a validade dos valores fornecidos.
c.Forneça um construtor sem parâmetros que inicializa a data com a data atual fornecida pelo sistema operacional. 
d.Forneça um método set um get para cada atributo. 
e.Forneça  o  método  toString  para  retornar  uma  representação  da  data  como string. 
Considere que a data deve ser formatada mostrando o dia, o mês e o ano separados por barra (/). 
f.Forneça uma operação para avançar uma data para o dia seguinte. 
g.Escreva um aplicativo de teste que demonstra as capacidades da classe. 
Garanta que uma instância desta classe sempre esteja em um estado consistente.

aluno: leonardo de oliveira campos
*/

#include "Data.hpp"

int main(){
    int dia, mes, ano;
    int x=0;
    
    Data data;
    
    cout << "Digite o dia: " << endl;
    cin>>dia;
    data.setDia(dia);
    cout << "Digite o mês: " << endl;
    cin>>mes;
    data.setMes(mes);
    cout << "Digite o ano: " << endl;
    cin>>ano;
    data.setAno(ano); 
    
    cout << endl;
    cout << "Data" << endl;
    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;
    
    do{
        system("clear");
        data.Avanca();
        cout << "Desejá continuar: " << endl;
        cout << "1 - sim" << endl;
        cout << "0 - não" << endl;
        cin >> x;
    }while(x);
    
    return 0;
}