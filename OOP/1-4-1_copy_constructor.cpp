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


    /* This constructor is called only copy is activated. */
    /* If this constructor is not declarated the main
       constructor is called one more time. */
    Player(const Player &obj)
    : name{obj.name}, xp{obj.xp}, health{obj.health}  /* copy constructor */
    {
        cout << "Create a copy." << endl;
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

void display(Player plr_objct){
    cout << "Create a copy on this scope." << endl;
    plr_objct.set_xp(25);
    cout << "This obj XP is: " << plr_objct.get_xp() << endl;
}


int main(){
    Player wizard("Gandoo", 50 ,100);

    display(wizard); /* Create a copy of this object inside this fuction */

    cout << "Not affect the original object" << endl;
    cout << "The original XP is: " << wizard.get_xp() << endl;

    Player magician {wizard};  /* Create a new object by copy that old object */

    return 0;
}

