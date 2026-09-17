#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:
    /* Constructor */
    Deep(int d){
        data = new int;
        *data = d;
    }
    Deep(const Deep &source)
    : Deep{*source.data} /* Delegate constructor list */
    {
        cout << "Copy constructor - deep copy" << endl;
    }

    /* Destructor */
    ~Deep(){
        delete data;  /* Release the heap memory */
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

void display(Deep s){
    cout << s.get_data_value() << endl;
}

int main(){
    Deep obj1 {100};
    display(obj1);  /* Create a copy the obj1 */

    obj1.get_data_value();

    Deep obj2 {obj1};
    obj2.set_data_value(100);
    return 0;
}
