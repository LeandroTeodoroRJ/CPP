
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

    void foo(){
        cout << "Super class method" << endl;
    }

    virtual void bar(){
        cout << "Super bar method" << endl;
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

    void foo(){ /* extends superclass method */
        cout << "Derivated class method" << endl; /* redefine */
        Base::foo(); /* invoke super class method */
    }

    void bar() override{ /* re-write super class bar method */
        cout << "Derivated bar method" << endl;
    }

};

int main(){
    Derivated obj;
    obj.foo();
    obj.bar();
    return 0;
}
