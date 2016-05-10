#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;

int main(){
    Sales_item item1, item2;
    cin>>item1>>item2;
    
    if(item1.isbn()==item2.isbn()){
        cout<<item1+item2<<std::endl;
        return 0;
    }else{
        std::cerr<<"Data must refer to the same ISBN!"<<std::endl;
        return -1;
    }
}