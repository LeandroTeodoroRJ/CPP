// OPERADORES

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    //Matemáticos
    cout << 2 + 3 << endl;
    cout << 2 - 3 << endl;
    cout << 2 * 3 << endl;
    cout << 2 / 3 << endl;  //A divisão entre dois inteiros tem como resultado um inteiro
    cout << 2 / float(3) << endl;
    cout << 7 % 2 << endl;  //Módulo (resto da divisão)

    //Relacionais
    //Operador de atribuição(=)
    cout << "Operadores Relacionais" << endl;
    int x = 1;
    x += 10;    //x = x + 10
    cout << x << endl;

    cout << (x > 10) << endl;   //Operadores de comparação. Retorna 0 ou 1 (true ou false)
    cout << (x < 10) << endl;
    cout << (x >= 10) << endl;
    cout << (x <= 10) << endl;
    cout << (x == 10) << endl;
    cout << (x != 10) << endl;

    //Operadores lógicos
    cout << "Operadores Lógicos" << endl;
    cout << x << endl;
    cout << ((x > 10) && (x > 20)) << endl;     //AND (operador binário)
    cout << ((x > 10) && !(x > 20)) << endl;    //NOT (operador unário)
    cout << ((x > 10) || (x > 20)) << endl;     //OR
    cout << ((x > 10) ^ (x > 20)) << endl;      //OU EXCLUSIVO (mesmo que !=)

    //Operadores unários de incremento e decremento
    cout << "Operadores incrementais" << endl;
    cout << x << endl;
    cout << x++ << endl;    //Operador de incremento (executa depois incrementa)
    cout << ++x << endl;    //Incremento (incrementa depois executa)
    cout << x-- << endl;    //Operador de decremento
    cout << --x << endl;

    //Operador Ternário
    cout << "Operador ternário" << endl;
    // var = <expressão> ? <valor se verdadeiro> : <valor se falso>
    string y;
    y = ((x % 2) == 0) ? "Par" : "Ímpar";
    cout << x << endl;
    cout << y << endl;

    //Cuidado!
    // O "<<" também é o operador shift-right, ele é redefinido pelo objeto cout.


    return 0;
}
