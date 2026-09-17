#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int *p1 = new int(100);  /* Alocate on the heap memory with int value 100 */
                             /* Pointer to the heap space */
    cout << "Whats this value? " << p1 << endl;
    cout << "...and" << endl;
    cout << "Whats this value? " << *p1 << "\n" << endl;
    *p1 = 200; /* Change value */
    cout << "Whats this value? " << p1 << endl;
    cout << "...and" << endl;
    cout << "Whats this value? " << *p1 << "\n" << endl;
    delete p1; /* Release heap memory */

    int *p2;  /* Create to another int pointer on stack memory, but does it indicate
                 to where stack memory locate? */
    int a = 10; /* Create a int variable */
    p2 = &a;  /* Locate to address variable "a" */
    cout << "Whats this value? " << p2 << endl;
    cout << "...and" << endl;
    cout << "Whats this value? " << *p2 << "\n" << endl;

    *p2 = 46; /* Access memory location */
    cout << "Whats this value? " << p2 << endl;
    cout << "...and" << endl;
    cout << "Whats this value? " << *p2 << endl;
    cout << "Whats this value? " << a << endl;

    /* Notes:
       - To change value inside memory location uses the derefence
         symbol "*".
       - new operator will alocate on heap memory.
    */

    return 0;
}
