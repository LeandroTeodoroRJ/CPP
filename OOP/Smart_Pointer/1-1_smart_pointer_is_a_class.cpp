#include <iostream>
#include <memory>

using namespace std;

int main(){
    std::unique_ptr<int> p1 {new int {100}};
    std::cout << p1.get() << std::endl; /* Get memory address method */
    std::cout << *p1 << std::endl;
    p1.reset(); /* p1 is nullptr */
    if (p1){
        std::cout << *p1 << std::endl; /* what the pointer value */
    }else{
        std::cout << "p1 is nullptr" << std::endl;
    }
    /* Automatically deleted */
    return 0;
}
