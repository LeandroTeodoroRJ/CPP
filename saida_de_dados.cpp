// IMPRIMINDO NA SAÍDA PADRÃO

#include <iostream>
#include <cstdio>  //Biblioteca de I.O. do compilador C

int main(){

    std::cout << "Hello C++" << std::endl; //Imprime e pula uma linha end line
    std::cout << "Flamengo \n"; //Imprime e pula uma linha
    std::cout << 3.14 << std::endl;

    printf("Vasco \n");     //É possível utilizar as funções do C
    puts("Fluminense");

    //Saída formatada
    double var = 23.4567891;
    printf("Valor %d \n", var);     //Imprimindo um inteiro
    printf("Valor %f \n", var);     //Imprimindo um float
    printf("Valor %.2f \n", var);     //Imprimindo um float com 2 casas decimais

    return 0;
}
