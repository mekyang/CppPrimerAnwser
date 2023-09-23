#include <iostream>
#include "Sales_item.h"

//下一个任务中说明输入的数据序号应该聚在一起，故不考虑序号分散的情况。
int main(){
    Sales_item book, currBook;
    std::cin >> currBook;
    int cnt = 1;
    while (std::cin >> book){
        if (book.isbn == currBook.isbn)
            cnt++;
        else{
            std::cout << currBook.isbn << "有" << cnt <<"条记录" << std::endl;
            currBook = book;
            cnt = 1;
        }
    }
    std::cout << currBook.isbn << "有" << cnt <<"条记录" << std::endl;
    return 0;
}