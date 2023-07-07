// VALIDAÇÃO DE DADOS E CAST

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    float a = 1.2;
    char b = 'x';

    //Validação de strings
    string texto = "";
//    string texto = "Flamengo";
    cout << "A string está vazia? " << texto.empty() << endl;   //O espaço " " não é considerado vazio.


    //Validação
    //Não é um número


    //Cast
    //Cuidado!
    printf("1/2 = %f",(float)(1/2));  //Resultado é 0.000000 cast foi feito depois da operação
    printf("1/2 = %f",((float)1/2));  //Correto

    return 0;
}
