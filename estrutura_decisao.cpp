// ESTRUTURAS DE DECISÃO

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a = 5;
    char b = 'r';

    //if de 1 linha
    if (a > 2) cout << "Maior que 2." << endl;

    //if com bloco
    if (a == 5){
        cout << "Positivo" << endl;
        cout << "Igual a 5" << endl;
    }

    //if - else
    if (a % 2 == 0){
        cout << "Número par" << endl;
    }else{
        cout << "Número ímpar" << endl;
    }

    //if - else if
    if (a > 10){
        cout << "Maior que 10" << endl;
    }else if(a % 2 == 0){
        cout << "Par" << endl;
    }else{
        cout << "Ímpar menor que 10" << endl;
    }

    //switch-case
    switch(b){
        case 'r':
            cout << "A letra é r" << endl;
            cout << "r de rato" << endl;
            cout << b << endl;
            break;
        case 'x':
            cout << "A letra é x." << endl;
            cout << b << endl;
            break;
        case 'z':
        case 't':
            cout << "A letra é z ou t" << endl;
            cout << b << endl;
            break;
        default:
            cout << "Sem opção" << endl;
    }

    return 0;
}
