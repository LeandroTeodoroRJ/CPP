
#include <iostream>
#include <cstdio>

using namespace std;

class Base{
private:
protected:
public:
    Base(){
        cout << "Base class constructor" << endl;
    }

    ~Base(){
        cout << "Destructor Base class" << endl;
    }
};

class Derivated : public Base{
private:
protected:
public:
    /* The derivated class constructor extend the base class constructor */
    Derivated(){
        cout << "Derivated class constructor" << endl;
    }

    ~Derivated(){
        cout << "Destructor Derivated class" << endl;
    }
};

int main(){
    Derivated obj;
    return 0;
}
