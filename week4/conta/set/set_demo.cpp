#include <set>
#include <memory>
#include <iostream>
#include "Employee.h"

using Pointer = std::shared_ptr<Employee>;
using pointer_container = std::set<Pointer>;

template <typename T>
void Display(const T& container){
    for(const auto& val : container){
        std::cout << val << "\n";
    }
}

template <>
void Display(const pointer_container& data ){
    for(const Pointer& ptr : data){
        std::cout << *ptr << "\n";
    }
}

int main(){
    std::set<int> s1 {10,20,30,40,50,10,50,30};
    Display<std::set<int>>(s1);
}


