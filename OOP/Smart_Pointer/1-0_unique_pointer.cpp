#include <iostream>
// #include <string>
#include <memory>

using namespace std;

int main(){
    std::unique_ptr<int> p1 {new int {100}};
    std::cout << *p1 << std::endl;
    *p1 = 200;
    std::cout << *p1 << std::endl;
    /* Automatically deleted */
    return 0;
}
