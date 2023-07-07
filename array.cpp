// ARRAYS
// Declaração de arrays e operações

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {

    //Um array é uma estrutura que armazena uma
    //coleção de valores homogênia(mesmo tipo).

    int ar1[3];     //Criando um array de 3 elementos vazio
    ar1[0] = 10;    //Inicializando algumas posições do array
    ar1[1] = 6;

    int ar2[] = {5, 7, 13, 90};  //Criando um array de 4 elementos e inicializando
//  int ar2[];  ERRO
    cout << "Valor da primeira posição do array: " << ar2[0] << endl;

    //Iterando sobre arrays
    string nomes[] = {"João", "Maria", "Pedro", "Paula"};
    for(int i=0; i < 4; i++){
        cout << nomes[i] << endl;
    }

    int size = sizeof(nomes) / sizeof(nomes[0]);    //Retorna o tamanho do array
    cout << "O tamanho do array é: " << size << endl;
    for(int i=0; i < size; i++){    //Utilizando a checagem automática
        
    }

    //Utilizando o foreach por cópia...
    for(string s: nomes){
        cout << s << endl;
    } 

    //Utilizando o foreach por referência...
    for(string &s: nomes){
        cout << s.append("!!!") << endl; //Aqui altera direto no array de nomes passado.
    } 
    cout << nomes[0] << "\t" << nomes[1] << endl;

    //Utilizando o foreach por referência somente leitura
    //Esse método é menos custoso em memória que executar por cópia
    for(string const &s: nomes){
//      cout << s.append("!!!") << endl; //ERRO - não é possível alterar
        cout << s << endl;
    } 
    cout << nomes[0] << "\t" << nomes[1] << endl;

    //Array de mais de 1 dimensão
    int multi[2][3] = {
        {2, 4, 5},
        {7, 3, 0}
    };
    cout << "Acessando um elemento da matriz" << multi[1][2] << endl;
    multi[0][2] = 10;   //Alterando um valor

    //Vetores
    //Vetores são arrays dinâmicos
    vector <int> numeros = {1, 2, 3};   //Declarção de um vetor - vector <type> <name>
    numeros.push_back(4);   //É possível adicionar elementos ao final do vetor

    //Iterando sobre o vetor
     size = sizeof(numeros) / sizeof(numeros[0]);    //Retorna o tamanho do array
    cout << "O tamanho do vetor é: " << size << endl;
    for(auto i=0; i < size; i++){    //Utilizando a checagem automática
         cout << "Elemento do vetor: " << numeros[i] << endl;
    }

    //Iterando com métodos do vetor
    for(auto i=numeros.begin(); i != numeros.end(); i++){        //Utilizando a checagem automática
        cout << "Elemento do vetor: " << *i << endl;    //i retornado é uma referência
        *i = *i + 10;   //É possível alterar o vetor por referência
    }

    for(auto i=numeros.cbegin(); i != numeros.cend(); i++){        //Iterando para somente leitura
        cout << "Elemento do vetor: " << *i << endl;    //i retornado é uma referência
//        *i = *i + 10;   //ERRO
    }

    //Inicializando um vetor com 1
    vector <int> num;
    num.assign(15, 1);   //Vetor de 15 posições com número 1
    num.erase(num.begin() + 3);     //Excluindo o elemento de índice 4
    num.clear();    //Limpando um vetor

    return 0;
}
