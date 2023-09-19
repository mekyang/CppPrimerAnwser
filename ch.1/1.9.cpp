#include <iostream>

int main() 
{
    int a = 50;
    int sum = 0;
    while (a <= 100){
        sum += a;
        a++;
    }
    std::cout << "和为：" << sum << std::endl;
}