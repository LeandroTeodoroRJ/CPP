#include <iostream>
#include <cstdio>

using namespace std;

void double_number(int *value){
    *value = *value * 2;
}

int main(){
    int number {25};
    cout << number << endl;
    double_number(&number);
    cout << number << endl;
    return 0;
}
