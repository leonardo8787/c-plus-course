/*
Escreva um programa completo para jogar o jogo da velha. Para tanto crie uma classe JogoDaVelha:
a. a classe deve conter como dados privados uma matriz 3x3 para representar a grade do jogo
b. crie uma enumeração para representar as possibilidades de ocupação de uma casa na grade (vazia, jogador 1 ou jogador 2)
c. o construtor deve inicializar a grade como vazia
d. forneça um método para exibir a grade
e. permita dois jogadores humanos
f. forneça um método para jogar o jogo; 
todo movimento deve ocorrer em uma casa vazia; 
depois de cada movimento, determine se houve uma derrota ou um empate.

aluno: leonardo de oliveira campos
*/

#include "Jogodavelha.hpp"

int main(){
    
    Jogodavelha jogo;
    
    jogo.Tabuleiro();
    jogo.Jogada();

    return 0;
}