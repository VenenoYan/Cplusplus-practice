#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;
    if(std::cin>>total){
        Sales_item trans;
        while(std::cin>>trans){
            if(total.isbn()==trans.isbn())
                total+=trans;
            else{
                std::cout<<total<<std::endl;
                total = trans;
            }
        }
        std::cout<<total<<std::endl;
    }else{
        std::cerr<<"No data?"<<std::endl;
        return -1;
    }
    unsigned u1=42,u2=10;
    std::cout<<u1-u2<<std::endl;
    std::cout<<u2-u1<<std::endl;
    int i1 = 10,i2 = 42;
    std::cout<<i2-i1<<std::endl;
    std::cout<<i1-i2<<std::endl;
    std::cout<<i1-u1<<std::endl;
    std::cout<<u1-i1<<std::endl;
    return 0;
}