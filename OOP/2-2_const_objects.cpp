#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    /* Constructor */
    Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
    {
        cout << "Constructor with tree parameters called" << endl;
    }

    /* The destructor can't return any value and not accept any parameter */
    ~Player(){
        cout << "Destructor called" << endl;
    }

    void set_name(std::string name_val){
        name = name_val;
    }

    std::string get_name() const{
        return name;
    }

};


int main(){
    const Player hero("Gilter", 100, 12);
//  hero.set_name("Walf"); /* ERROR - not possible modify const objects */
    cout << hero.get_name() << endl; /* It's necessary declare as const method */

    return 0;
}
