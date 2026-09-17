#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val, int xp_val, int health_val)
    : name{name_val}, xp{xp_val}, health{health_val}
    {
        cout << "Construtor with inicializarion list" << endl;
    }


    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_xp(int xp_val){
        xp = xp_val;
    }

    int get_xp(){
        return xp;
    }

};

void display(Player *plr_objct){
    cout << "Move object on this scope." << endl;
    plr_objct->set_xp(25);
    cout << "This obj XP is: " << plr_objct->get_xp() << endl;
}


int main(){
    Player wizard("Gandoo", 50 ,100);
    cout << "The original XP is: " << wizard.get_xp() << endl;

    display(&wizard); /* Create a copy of this object inside this fuction */

    cout << "It is affect the original object" << endl;
    cout << "The original XP is: " << wizard.get_xp() << endl;

    return 0;
}
