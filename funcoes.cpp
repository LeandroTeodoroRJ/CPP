//--------- FUNÇÕES ----------
/*
Descrição:
Estudo das funções e seus tipos.
Observações:
1 - Se a função não for declarada antes de seu uso,
    é necessário declarar o protótipo da função,
    chamado também de function prototype ou
    function interface.

2 - A assinatura de uma função é composta pelo seu
    nome, quantidade, a ordem  e tipo dos parâmetros de entrada.
    Se um desses for diferente o compilador irá entender
    a função como diferente das demais.
    O tipo da saída não faz parte da assinatura de
    uma função.
*/

#include <iostream>
#include <cstdio>
using namespace std;


/*
hello :: (void) -> void
hello: Imprime hello no console
Call example: hello();
*/
int hello(){
    cout << "Hello!" << endl;
}

/*
soma :: (int a, int b) -> int
soma: Soma 2 números
a: Primeiro número
b: Segundo número, por padrão vale 1.
output value: (int) Retorna a soma dos números
Call example: r = soma(2, 4)
*/
int soma(int a, int b = 1){
    return a+b;
}


/*
inc:: (int &var) -> void
inc: Incrementa o valor de uma variável
     passada por referência.
&var: Referência de uma variável
Call example: inc(a)
*/
int inc(int &var){
    var++;
}


/*
fatorial :: (int n) -> int
fatorial: Calcula o fatorial de forma recursiva
n: Número para cálculo do fatorial
output value: (int) Resultado do fatorial
Call example: r = fatorial(5)
*/
int fatorial(int n){
    if (n==1) return 1;         //Condição de parada
    return n * fatorial(n-1);   //Recursividade (a função chama a si mesma)
}



/*
exec :: (int (*func)(int, int), int a, int b) -> int
exec: Recebe uma função como parâmetro e mais dois argumentos
int (*func)(int, int): Função que tem dois parâmetros int e retorna um int
a, b: Parâmetros que serão utilizados para a função func
Call example: r = exec(sum, 5, 8)
Outras notas:
Também é possível utilizar com o using ou typedef
    using opbinario = int (*)(int, int);

    int exec(opbinario func, int a, int b){
        return (*func)(a, b);
    }

*/
int exec(int (*func)(int, int), int a, int b){
    return (*func)(a, b);
}



int main() {
    hello();
    cout << soma(5) << endl;    //Utilizando o valor padrão de b
    cout << soma(6, 2) << endl;
    int a = 2;
    inc(a);
    cout << "Valor de a depois da função: " << a << endl;
    cout << "Fatorial de 6: " << fatorial(6) << endl;
    cout << "Passagem da função suma como parâmetro: " << exec(soma, 5, 4) << endl;

    //A função lamda é definida pela estrutura [](<input params>) -> <output>{function body}
    cout << "Função lambda: " << exec([](int a, int b) -> int{return a - b;}, 6, 4) << endl;

    return 0;
}
