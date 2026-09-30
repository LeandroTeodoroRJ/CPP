#include <iostream>
#include <cstdio>

using namespace std;

void change_by_hundred(int &value){
    value = 100;
}

int main(){
    int num {10};
    int &var {num}; /* It's a alias to num...
                       basically working as a pointer. */
    cout << "\nValue num is: " << num << endl;
    cout << "Value var is: " << var << endl;

    num = 55;
    cout << "\nValue num is: " << num << endl;
    cout << "Value var is: " << var << endl;

    var = 200;
    cout << "\nValue num is: " << num << endl;
    cout << "Value var is: " << var << endl;

    /* The reference is a pointer NOT a copy! */
    change_by_hundred(num);
    cout << "\nValue num is: " << num << endl;
    cout << "Value var is: " << var << endl;

    return 0;
}
