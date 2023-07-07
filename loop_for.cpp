// LOOP COM FOR

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    for(int i = 0; i < 5; i++){
        cout << i << endl;
    }

    //Break e Continue
    cout << "Break" << endl;
    for(int i = 1; i < 5; i++){
        if (i == 3) break;  //Sai imediatamente do laço
        cout << i << endl;
    }

    cout << "Continue" << endl;
    for(int i = 1; i < 5; i++){
        if (i == 3) continue; //Termina a repetição atual e continua no laço
        cout << i << endl;
    }

    return 0;
}
