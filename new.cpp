//--------- OPERADOR NEW ----------
/*
O operador new é utilizado para alocar dados na memória heap.

*/

#include <iostream>
#include <cstdio>
using namespace std;


int main(int argc, char const *argv[]){


    //O operador new retorna uma referência de memória.
    int *y = new int(10); //Aloca um inteiro de valor 10 na memória heap.

    cout << *y << endl;
    delete y;   //Liberando a memória heap
    return 0;
}
