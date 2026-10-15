#include <iostream>
#include <string>

using namespace std;

class Whell{
private:

public:
    int size;

    Whell(int size_val){
        size = size_val;
    }
};

class Car{
private:

public:
    std::string color;
    Whell sport_whell;

    Car(std::string color_val, int whell_val)
    : sport_whell{whell_val} /* Declare by inicialization list */
    {
        color = color_val;
    }

};


int main(){
    Car ferrari("Red", 19);
    cout << ferrari.color << endl;
    cout << ferrari.sport_whell.size << endl;
    return 0;
}
