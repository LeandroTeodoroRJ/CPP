#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    /* Overload Constructors */
    Player(){
        cout << "No args constructor called" << endl;
    }
    Player(std::string name){
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp){
        cout << "Constructor with tree parameters called" << endl;
    }

    /* The destructor can't return any value and not accept any parameter */
    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }

};


int main(){
    Player wizard;  /* Create object in stack memory */
    wizard.set_name("Gandoo");

    Player hero("Gilter", 100, 12);

    Player *enemy = new Player; /* Create manual pointer to heap memory space */
    enemy->set_name("Walker");
    delete enemy;   /* Possible problem leak memory if you forget release the memory */

    cout << "Auto delete wizard and hero because them out of scope - Stack Memory " << endl;

    return 0;
}
