#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int num = 10;
    cout << "Value is: " << num << endl;
    cout << "The size is: " << sizeof num << endl;
    cout << "The address is: " << &num << endl;

    int *p;
    cout << "Value is: " << p << endl; /* garbage */
    cout << "The address is: " << &p << endl;
    cout << "The size is: " << sizeof p << endl;

    p = nullptr; /* set null pointer, not garbage data */
    cout << "Value is: " << p << endl; /* garbage */

    p = &num; /* set the pointer address */
    *p = 100; /* Change value of the memory location */
    cout << "Value is: " << num << endl;
    cout << "Value is: " << *p << endl;

    cout << "The address is: " << &num << endl;
    cout << "The address is: " << p << endl;
    cout << "The address is: " << &p << endl; /* Be carreful: this is address
                                                 of the pointer variable, not the
                                                 memory target. To access the value
                                                 store on address you must use '*'
                                               */

    /*
    For example...
                &num or &p              num or p                        *num or *p
    Variable    [address of variable]   [value of variable]             [ERROR]
    Pointer     [address of pointer]    [target to address variable]    [value of variable]
                                                                         --indirect access of memory
    */

    return 0;
}
