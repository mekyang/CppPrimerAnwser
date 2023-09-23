#include <iostream>

int t_1_9(){
    int sum = 0;
    for (int i = 50; i <= 100; i++){
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}

int t_1_10(){
    for (int i = 10; i >= 0; i--){
        std::cout << i << std::endl;
    }
    return 0;
}

int t_1_11(){
    int v1 = 0, v2 = 0;
    std::cout << "小的值为:";
    std::cin >> v1;
    std::cout << "大的值为";
    std::cin >> v2;
    std::cout << std::endl;

    for (v1; v1 <= v2; v1++){
        std::cout << v1 << std::endl;
    }

    return 0;
}