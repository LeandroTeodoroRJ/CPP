//--------- PRIMEIRA CLASSE ----------
/*
Criando a primeira classe.
*/

#include <iostream>
#include <cstdio>
using namespace std;


/* 
<func name> :: (<type and params input list>) -> <output value or void>
<func name>: Description
<input param name>: Description
output value: (<type>) Description
Call example: <sintax>
Description: 
<other notes>
*/
// int func(){
//
// }

class PrimeiraClasse{
private:
    int atr1;      //Criação de um atributo privado
    int atr4;
    string atr2 = "String da classe.";  //Atributo de classe

public:
    int atr3;   //Criação de um atributo público

    string get_string(){    //Criando um método público
        return atr2;
    }

    PrimeiraClasse(int atr1, int patr2){       //Método construtor, deve ter o mesmo nome da classe e não deve ter retorno (nem void)
        cout << "Método Construtor." << endl;
        cout << "this aponta para o objeto criado: "<< this << endl;
        (*this).atr1 = atr1;   //atr1 é parâmetro do método ou atributo? É possível cancelar a ambiguidade assim.
        this->atr1 = atr1;      //Também é possível fazer assim, um ou outro...
        atr4 = patr2;          //Inicialização dos atributos pelo construtor
    }

    ~PrimeiraClasse(){       //Método destrutor
        cout << "Método Destrutor." << endl;
    }


};



/*
main :: (int argc, char const *argv[]) -> int
<func name>: Description
argc: Number of params in command terminal
argv[]: Array of params in command terminal
output value: (int) 0-Program successful ends
*/
int main(int argc, char const *argv[]){

    PrimeiraClasse obj1(2, 6);    //Intância de objetos
    PrimeiraClasse obj2(7, 4);    //Se a classe não possui parâmetros no construtor
                                  //pode ser iniciaizada como segue: PrimeiraClasse obj1;

    cout << &obj1 << endl;  //Referência do objeto 1
    cout << &obj2 << endl;  //Referência do objeto 2

//    obj1.atr1 = 4;     //ERRO - Pois o atributo é privado
    obj1.atr3 = 5;      //Alterando o valor de um atributo de classe
    cout << obj1.atr3 << endl;

    //Chamando métodos de classe
    cout << obj1.get_string() << endl;
    cout << "Fim do código." << endl;

    return 0;
}
