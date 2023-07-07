// MANIPULANDO STRINGS

#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    string titulo = "Sr. ";     //Declarando uma string
    string nome("João ");       //Declarando uma string
    string separador(10, '-');  //String com 10 sinais de -

    //Uma string é uma classe
    cout << nome.size() << endl;    //Tamanho de caracteres da string
    cout << nome[0] << endl;        //Retorna a primeira letra, uma string
                                    //é um array de caracteres.

    //Concatenação de strings
    cout << titulo + nome + "Silva" << endl;

    nome = "José ";         //Alterando o valor de uma string
    nome += "de Souza";     //Concatenando e alterando o valor
    nome.append(" Moraes"); //Acrescantendo ao final da string  
    cout << nome << endl;

    return 0;
}
