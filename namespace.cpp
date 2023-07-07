//--------- NAMESPACE ----------
/*
Descrição:
Criação e uso de espaço de nomes.

Não é possível utilizar duas funções com a mesma
assinatura. Para resolver esse problema
utilizaemos o namespace.

*/

#include <iostream>
#include <cstdio>
using namespace std;

int soma(int a, int b){
    return a+b;
}

//Sintaxe: namespace <nome> {boby}
namespace ext {

    int soma(int a, int b){
        return a+b+100;
    }

    int multiplicar(int a, int b){
        return a*b;
    }
}


/*
main :: (int argc, char const *argv[]) -> int
<func name>: Description
argc: Number of params in command terminal
argv[]: Array of params in command terminal
*/
int main(int argc, char const *argv[]){
    cout << soma(5, 3) << endl;
    cout << ext::soma(5, 3) << endl;
    cout << ext::multiplicar(5, 2) << endl;
    return 0;
}
