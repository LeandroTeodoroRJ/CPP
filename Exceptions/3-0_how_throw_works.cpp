
#include <iostream>

void func_b(){
    std::cout << "Start func a" << std::endl;
    throw 10; /* the throw returns to the next catch */
    std::cout << "Ends func a" << std::endl; /* this line never executes */
}

void func_a(){
    std::cout << "Start func a" << std::endl;
    func_b();
    std::cout << "Ends func a" << std::endl; /* this line never executes */
}

int main(){
    std::cout << "Start main" << std::endl;
    try {
        func_a();
    }
    catch(int &ex){
        std::cerr << "Catch Error" << std::endl;
    }
    std::cout << "Ends main" << std::endl;

    return 0;
}
