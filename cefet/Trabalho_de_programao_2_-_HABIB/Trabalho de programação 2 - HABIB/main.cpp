/*
Implemente uma classe chamada carro. A classe deve possuir os
atributos, nome, combustível (que armazena a quantidade de
combustível no tanque), distancia (que armazena a distância percorrida
desde o abastecimento) e consumo. O tanque de combustível do carro
armazena no máximo 50 litros de gasolina. Deve-se criar os métodos get
(getters) e set (setters) para todos os atributos e o acesso a eles de
dentro da função main deve ser feito apenas por meio desses métodos.
Deve ser possível:
a. Abastecer o carro com uma certa quantidade de gasolina;
b. Mover o carro em uma determinada distância (medida em km);
c. Retornar a quantidade de combustível e a distância total
percorrida;
d. No programa principal (main), crie 2 carros. Preencha todos os
dados de ambos os carros. Abasteça 20 litros no primeiro e 30
litros no segundo. Desloque o primeiro em 200 km e o segundo
em 400 km. Exiba na tela a distância percorrida e o total de
combustível restante para cada um.
*/

#include<iostream>
#include "carro.hpp"

int main(){
    string carro_1, carro_2;
    float consumo_1, consumo_2;
    Carro objeto;
    cout << "Digite o nome do veículo: " << endl;
    getline(cin,carro_1);
    objeto.setNome(carro_1);
    cout << "Digite o nome do segundo veículo: " << endl;
    getline(cin,carro_2);
    objeto.setNome(carro_2);
    cout << endl;
    cout << "O tanque de ambos os carros suportam 50 litros de gasolina" << endl;
    cout << "Ambos os carros estão com quilometragem 0" << endl; 
    cout << "O primeiro abastecimento do 1° carro é de 20 litros" << endl; 
    objeto.setCombustivel(20);
    cout << "O primeiro abastecimento do segundo carro é de 30 litros" << endl; 
    objeto.setCombustivel(30);
    cout << "O primeiro carro deslocou-se 200km, já o segundo carro deslocou-se 400km" << endl;
    objeto.setDistancia(200); 
    objeto.setDistancia(400);
    cout << endl;
    cout << "Velocímetro - " << carro_1 << endl;
    consumo_1 = (200 / 20);
    objeto.setConsumo(consumo_1);
    cout << "Distância: 200km" << endl;
    cout << "Consumo: " << consumo_1 << "L" << endl;
    cout << endl;
    cout << "Velocímetro - " << carro_2 << endl;
    consumo_2 = (400/30);
    objeto.setConsumo(consumo_2);
    cout << "Distância: 400km" << endl;
    cout << "Consumo: " << consumo_2 << "L" << endl;
    return 0;
}
