#include <iostream>
#include <string>

using namespace std;

int xp = 20;

class Player{
private:

public:
    int xp;

    /* Constructor */
    Player(){
        cout << "No args constructor called" << endl;
    }

    /* The destructor can't return any value and not accept any parameter */
    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_xp(int xp){
        this->xp = xp;   /* xp = xp
                            xp global variable or xp propriety or
                            xp local paramitter ???
                            "this" is a reference to inside
                            object proprieties.
                            CAUTION - the compiler not show error! */
    }
};


int main(){
    Player wizard;
    wizard.set_xp(100);

    cout << xp << endl;
    cout << wizard.xp << endl;

    return 0;
}
