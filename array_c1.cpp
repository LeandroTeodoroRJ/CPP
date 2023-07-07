//--------- ARRAYS E VETORES ----------
/*
Arrays e vetores continuação...
*/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int main(int argc, char const *argv[]){

    vector<int> *v1 = new std::vector<int>({1,2,3});  //Instânciando um array na Heap
    vector<int> *v2;
    v2=v1;  //Ambos os ponteiros apontam para a mesma posição de memória
    v1->push_back(4);
    v2->push_back(5);

    for (auto i: *v1){
        cout << i << "\t"; 
    }
    cout << endl;
    for (auto i: *v2){
        cout << i << "\t";
    }
    cout << endl;

    return 0;
}
