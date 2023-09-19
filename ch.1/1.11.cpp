#include <iostream>

int main(){
    int v1 = 0, v2 = 0;
    std::cout << "小的值为:";
    std::cin >> v1;
    std::cout << "大的值为";
    std::cin >> v2;
    std::cout << std::endl;

    while (v2 >= v1) {
        std::cout << v2 << std::endl;
        v2--;
    }
    return 0;
}