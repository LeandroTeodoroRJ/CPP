//--------- DIRETIVAS DE PREPROCESSAMENTO ----------
/*
Descrição:
Diretivas de preprocessamento.

Notas:
1 - Quando usamos a diretiva #include com <> o arquivo
    será buscado dentro do path do C++. Quando utilizamos
    as aspas "" o arquivo é buscado na pasta do projeto
    ou no caminho declarado.

*/

#include <iostream>
#include <cstdio>
using namespace std;

#define PI 3.14     //Substitui uma sentença por outra
#define id "Código"


/*
main :: (int argc, char const *argv[]) -> int
<func name>: Description
argc: Number of params in command terminal
argv[]: Array of params in command terminal
output value: (int) 0-Program successful ends
*/
int main(int argc, char const *argv[]){
    cout << id << endl;

    //Checa se a sentença foi definida e
    //desvia o fluxo.
    #ifdef PI
        cout << "PI foi definido" << endl;
        cout << PI << endl;
    #else
        cout << "PI não foi definido" << endl;
    #endif

    return 0;
}
