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

auto change_name(auto plr, std::string name_val){
    plr->set_name(name_val);
    return plr;
    /* plr pointer was destroyed, but the ownnership was transfer */
}

int main(){
    unique_ptr<Player> hero {new Player{"HERO", 100, 20}};
    hero = change_name(std::move(hero), "Walker"); /* The ownership was returned */
    hero->set_name("Halther");
    /* Automatically deleted */

    return 0;
}
