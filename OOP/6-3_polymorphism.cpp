
#include <iostream>
#include <cstdio>

using namespace std;

class Airplane{
private:
protected:
public:
    Airplane(){
        cout << "Call constructor Airplane" << endl;
    }

    virtual void dep(){
        cout << "Departure Super Class" << endl;
    }

    virtual ~Airplane() {}
};


class Figther: public Airplane{
private:
protected:
public:
    Figther(){
        cout << "Constructor Fighter class" << endl;
    }

    virtual void dep() override {
        cout << "Departure with F-16" << endl;
    }

    virtual ~Figther() {}
};

class Cargo: public Airplane{
private:
protected:
public:
    Cargo(){
        cout << "Constructor Cargo class" << endl;
    }

    virtual void dep() override {
        cout << "Departure with C7 Galaxy" << endl;
    }

    virtual ~Cargo() {}
};

void departure(Airplane *air){
    air->dep();
}

int main(){
    Airplane *air1 {nullptr};
    air1 = new Figther();
    Airplane *air2 {nullptr};
    air2 = new Cargo();
    departure(air1);
    departure(air2);
    delete air1;
    delete air2;

    return 0;
}
