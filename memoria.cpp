// REFERÊNCIA DE MEMÓRIA

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    //Atribuição por cópia.
    //(a alteração de //uma variável não gera impacto sobre a outra)
    cout << "Atribuição por cópia" << endl;
    int a = 3;
    int b = a;
    a = 5;
    cout << a << endl;
    cout << b << endl;

    //A atribuição por referência indica que 2 variáveis
    //estão apontando por um mesmo local de memória, assim
    //a alteração de uma variável afeta a outra.
    cout << "Atribuição por referência" << endl;
    int c = 5;
    cout << "Valor da variável c: " << c << endl;
    cout << "Local de memória da variável c: " << &c << endl;  //Referência de memória
    int &cRef = c;  //Criando uma variável para guardar a referência de c
    cout << "Valor da variável que aponta cRef: " << cRef << endl;
    cout << "Local de memória da variável que aponta cRef: " << &c << endl;
    cRef = 10;  //Alterando o valor de c de forma indireta
    cout << "Valor da variável c: " << c << endl;

    //Obtendo o valor de um local de memória: operador *
    cout << "Obtendo o valor de um local de memória." << endl;
    cout << "Local de memória da variável c: " << &c << endl;
    cout << "Valor do local de memória: " << *(&c) << endl;   //Valor da variável

    return 0;
}

/*
Observações:
1 - Não é possível criar uma variável de referência sem inicializar.
        init &xRef;  ERRO
2 - Uma referência depois de inicializada não pode apontar para outro
    local de memória.
        init a = 10;
        init &ref = a;
        init b = 3;
        ref = b;
        depois ... a: 3 , b=3 , ref=3

*/



