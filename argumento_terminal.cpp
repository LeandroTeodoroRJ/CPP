//--------- ARGUMENTOS POR TERMINAL ----------
/*
Descrição:
Passagem de argumento por linha de comando utilizando
o terminal quando o programa é executado
*/

#include <iostream>
#include <cstdio>
using namespace std;


int main(int argc, char const *argv[]) {
    cout << "Número de argumentos passados por terminal: " << argc << endl;
    cout << "O primeiro argumento é sempre o nome do arquivo de programa." << endl;
    cout << argv[0] << endl;
    cout << "Os outros são impressos na sequencia..." << endl;
    for(int i = 0; i < argc; i++){
        cout << "Argumento índice " << i << " vale: " << argv[i] << endl;
    }

    return 0;
}
