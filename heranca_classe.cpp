//--------- HERANÇA DE CLASSES ----------
/*
Realizar o processo de herança de classes.

*/

#include <iostream>
#include <cstdio>
using namespace std;

class ClassePai{
private:
    int atr1 = 1;
protected:
    int atr2 = 2;
public:
    int atr3 = 3;
};


class ClasseFilha : public ClassePai{   //Herança
private:

protected:

public:
//    int fatr1 = atr1;     //ERRO - atributos privados não são herdados
    int fatr2 = atr2;
    int fatr3 = atr3;
};


int main(int argc, char const *argv[]){
    ClasseFilha obj1;
//    cout << obj1.fatr1 << endl;
    cout << obj1.fatr2 << endl;
    cout << obj1.fatr3 << endl;
//    cout << obj1.atr2 << endl;    //O escopo protecded é herdado mais não pode ser acessado diretamente
    cout << obj1.atr3 << endl;      //O escopo publico da classe pai pode ser acessada, se public for declarado na linha de herança
    return 0;
}
