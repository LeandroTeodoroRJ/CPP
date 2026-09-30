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

void change_name(auto plr, std::string name_val){
    plr->set_name(name_val);
}

int main(){
    unique_ptr<Player> hero {new Player{"HERO", 100, 20}};
//  change_name(hero, "Walker");  /* Error - unique pointer not implement a copy constructor */
    change_name(std::move(hero), "Walker");
    hero->set_name("Halther"); /* Error - Segmentaion Fault */
                               /* hero was destructed in change_name, because ownership was transfer.
                                  So hero is a nullptr now. */
    /* Automatically deleted */

    return 0;
}
