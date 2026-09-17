#include <iostream>

using namespace std;

class Shallow{
private:
    int *data;
public:
    /* Constructor */
    Shallow(int d){
        data = new int;
        *data = d;
    }
    Shallow(const Shallow &source)
//  : data(source.data)  /* Or ... */
    : data{source.data}
    {
        cout << "Copy constructor" << endl;
    }

    /* Destructor */
    ~Shallow(){
        delete data;  /* Release the heap memory */
                      /* This is the problem, the same objects
                         target to the same memory address */
        cout << "Destructor called" << endl;
    }

    /* Methods */
    int get_data_value(){
        return *data;
    }
    void set_data_value(int d){
        *data = d;
    }

};

void display(Shallow s){
    cout << s.get_data_value() << endl;
}

int main(){
    Shallow obj1 {100};
    display(obj1);  /* Create a copy the obj1 */

    /* Remember... the pointer was deleted than
       the obj1 out of scope - destructor.
       To resolve this problem you must use deep copy. */

    obj1.get_data_value(); /* Error */

    Shallow obj2 {obj1};
    obj2.set_data_value(100); /* Error */
    return 0;
}
