#include <iostream>
#include <cstdio>

using namespace std;

int *create_array(int size){
    int *storage {nullptr};
    storage = new int[size];
    for(int i = 0; i < size; ++i){
        *(storage + i) = 55;  /* storage with 55 all positions */
    }
    return storage; /* return the pointer of heap */
}

int main(){
    int *my_array {nullptr};
    my_array = create_array(10);
    cout << *(my_array + 2) << endl; /* view the second address */
    delete [] my_array; /* remember... release the heap */
    return 0;
}
