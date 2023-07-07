//--------- MAP ----------
/*
Implementação da função MAP

*/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


/*
map :: (map(int (*fn)(int), vector<int> v) -> vector
map: Realiza a clássica função map
int (*fn)(int): Função lambda
output value: (vector) Resultado de saída da iteração
Call example: vector v = map(<lambda function>, <vector input>)
*/
vector<int> map(int (*fn)(int), vector<int> v){
    vector <int> new_v;
    for (auto i: v){
        new_v.push_back((*fn)(i));
    }
    return new_v;
}


/*
main :: (int argc, char const *argv[]) -> int
<func name>: Description
argc: Number of params in command terminal
argv[]: Array of params in command terminal
output value: (int) 0-Program successful ends
*/
int main(int argc, char const *argv[]){

    vector <int> num = {2, 4, 6, 35, 89};
    vector <int> resultados = map( [](int x) -> int{return x * x;}, num);

    for(auto i: resultados) cout << i << "\t";  //Percorre o array de resultados
    cout << "\n";

    return 0;
}



