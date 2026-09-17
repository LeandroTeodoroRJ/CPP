// PONTEIROS

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    //Ponteiro é uma variável que recebe como valor um endereço de memória.
    int a = 765;
    int &aRef = a;
    int *p = &a;    //O ponteiro recebe um endereço

    cout << "Endereço de memória de a: " << &a << endl;
    cout << "Conteúdo de a: " << a << endl;
    cout << "Conteúdo de aRef: " << aRef << endl;
    cout << "Conteúdo de p: " << p << endl;

    cout << "Observe..." << endl;
    cout << "Valor de da variável p: " << p << endl;
    cout << "Local de memória que p está gravado: " << &p << endl;  //a variável p existe e está gravada na memória do dispositivo
    cout << "Valor do local de memória apontado por p: " << *p << endl;

    cout << "Inicialização de ponteiros." << endl;
    int *p1;    //É possível inicializar um ponteiro vazio ou nulo, pois ele é uma variável.
    int b = 10;
    p1 = &a;    //Iniciaizando depois da criação
    cout << "Valor de p1: " << p1 << endl;
    p1 = &b;    //É possível alterar o valor do ponteiro (o ponteiro é uma variável)
    cout << "Valor de p1 depois da alteração: " << p1 << endl;

    //Ponteiros em arrays
    cout << "Ponteiro em arrays."  << endl;
    int arr[] = {34, 65, 12, 98, 46};
    int *p3 = &arr[0];  //Apontando para a referência do primeiro elemento
    cout << "Valor apontado por p3: " << *p3 << endl;
    p3++;   //Proximo valor de memório urilizando o tamanho int como base
    cout << "Novo valor apontado por p3: " << *p3 << endl;
    //De outra forma...
    cout << "Valor atual apontado por p3: " << p3[0] << endl;

    return 0;
}
