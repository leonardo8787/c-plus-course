/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia.
É um tipo de substituição na qual cada letra do texto é substituída por outra, que
se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com
uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e
assim por diante. Implemente um programa que faça uso desse Código de César
(3 posições), entre com uma string e retorne a string codificada. Exemplo: String:
a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R
FDFKRUUR FDQVDGR
Aluno: Leonardo de Oliveira Campos
*/

#include <string>
#include <iostream>

using namespace std;

char converter(char ch, int chave)
{
    if (!isalpha(ch)) return ch;
    char offset = isupper(ch) ? 'A' : 'a';
    return (char)((((ch + chave) - offset) % 26) + offset);
}

string criptografar( string entrada, int chave )
{
    string saida = "";
    size_t len = entrada.size();
    for( size_t i = 0; i < len; i++ )
        saida += converter( entrada[i], chave );
    return saida;
}

string decriptografar( string entrada, int chave )
{
    return criptografar( entrada, 26 - chave );
}

int main( void )
{
    int chave = 3;

    string txt;
    getline(cin, txt);
    cout << endl;

    string cripto = criptografar( txt, chave );
    cout << "Texto Cifrado: " << cripto << endl;

    string decripto = decriptografar( cripto, chave );
    cout << "Texto Decifrado: " << decripto << endl;

    return 0;
}
