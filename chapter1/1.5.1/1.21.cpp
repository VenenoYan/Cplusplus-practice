#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;

int main(){
    Sales_item item1, item2;
    cin>>item1>>item2;
    cout<<item1+item2<<std::endl;
    
    return 0;
}