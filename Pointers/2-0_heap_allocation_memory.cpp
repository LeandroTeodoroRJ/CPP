#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int *p {nullptr};
    p = new int; /* allocate on heap memory */
    cout << p << endl; /* target on the heap */
    cout << *p << endl;
    delete p; /* release heap memory */

    /* Dynamic allocation */
    size_t lengh{0};
    double *pointer_to_heap;

    cout << "How many memory spaces? ";
    cin >> lengh;

    pointer_to_heap = new double[lengh];

    delete [] pointer_to_heap;

    return 0;
}
