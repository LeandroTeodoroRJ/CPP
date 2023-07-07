// ENTRADA DE DADOS

#include <iostream>
using namespace std;

int main(){

    //insertion operator
    cout << "Digite seu nome: ";

    string nome;
    //extration operator
    cin >> nome;  //Lê a entrada padrão e guarda na variável

    //Imprime na tela
    cout << nome << endl;

    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << idade << endl;

    float altura;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << altura << endl;

    return 0;
}
