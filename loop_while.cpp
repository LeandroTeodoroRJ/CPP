// LOOP COM WHILE

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 0;

    //Entra no loop enquanto o valor da condição for verdadeira
    cout << "While" << endl;
    while(a < 5){
        cout << a << endl;  // a = 0, 1, 2, 3, 4
        a++;
    }

    //Com a estrutura Do-While primeiro é executado o bloco, 
    //depois o teste é realizado. Ou seja, pelo menos 1 vez 
    //o bloco é executado.
    cout << "Do-While" << endl;
    do{
        cout << a << endl;
        a--;
    }while(a != 0);

    return 0;
}
