#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    /* No constructor declarated */
    /* The compiler call the defaut constructor, if there is other constructor
       declarated is not possible call the defaut constructor automatically */

    /* The destructor can't return any value and not accept any parameter */
    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }
};


int main(){
    Player wizard;
    wizard.set_name("Gandoo");

    Player *enemy = new Player;
    enemy->set_name("Walker");
    delete enemy;

    cout << "Auto delete wizard and hero because them out of scope - Stack Memory " << endl;

    return 0;
}
