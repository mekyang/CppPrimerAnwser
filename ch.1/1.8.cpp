#include <iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    //非法 std::cout << /*":*/"*/
    std::cout << /*"*/"/*"/*"*/;
}