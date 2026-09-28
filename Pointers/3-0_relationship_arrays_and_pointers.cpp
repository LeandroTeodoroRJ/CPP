#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int arr[] = {5, 7, 100, 33};
    cout << arr << endl;
    cout << *arr << endl; /* Value stared on the frist pointer address */
    cout << *(arr + 1) << endl; /* Increment the address pointer */
    cout << *(arr + 2) << endl; /* = arr[2] */
    return 0;
}
