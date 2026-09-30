#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name, int health, int xp){
        cout << "Constructor with tree parameters called" << endl;
    }

    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }
};


int main(){
    /* No new keyword is needed */
    unique_ptr<Player> hero = make_unique<Player>("HERO", 100, 20);
    hero->set_name("Walker");

    /* Using auto is more readble and easier to write */
    auto hero2 = make_unique<Player>("HERO2", 100, 20);
    hero2->set_name("Oswald");

    /* Automatically deleted */

    return 0;
}
