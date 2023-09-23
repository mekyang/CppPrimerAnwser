#include <iostream>

int main(){
    int v1 = 0, v2 = 0;
    std::cout << "第一个值为:";
    std::cin >> v1;
    std::cout << "第二个值为";
    std::cin >> v2;
    std::cout << std::endl;

    int max = 0, min = 0;
    if (v1 >= v2){
        max = v1;
        min = v2;
    } else {
        max = v2;
        min = v1;
    }

    while (max >= min) {
        std::cout << max << std::endl;
        max--;
    }
    return 0;
}