// DECLARANDO VARIÁVEIS E CONSTANTES NO C++

#include <iostream>
#include <cstdio>
using namespace std;

typedef int id;     //Criando um alias para int ou também por 'using id = int'

int soma(int a){
    int var = 2;     //Valiável de escopo local
    return a + var;
}

void incrementa(){
    static int i = 0;   //A variável estática é inicializada somente 1 vez,
    i++;                //seu escopo continua sendo local mas seu local
                        //de memória é preservado.
}

int main(){

    int contador = 12;         //Declaração de uma variável tipo inteira
    short int peq = 23;        //Inteiro com menor tamanho de memória
    unsigned int positivo = 3; //Inteiro sem sinal
    float sensor = -5e-1;      //Variável float
    double medida = 2.56;     //Declaração de uma varável tipo float dupla
    char catacter = 'x';      //Tipo caracter ou char
    bool logico = 1;          //Tipo booleano
    const int valor = 51;     //Define uma constante do tipo inteira
    string nome = "Flamengo"; //Tipo string
    id produto = 15;           //Foi criado uma variável inteira utilizando o alias
                               //definido por typedef

    printf("Valor: %d \n", soma(contador));

    //Verificando o tamanho em bytes de um tipo de variável
    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;

    //Inferência de tipos: Declaração de tipo de variável de 
    //forma automática pelo compilador
    auto a = 1;
    auto b = 5.3;
    auto c = false;
    auto d = "Vasco";
    auto e = 'r';

    //Checando o tipo da variável
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;

    return 0;
}
