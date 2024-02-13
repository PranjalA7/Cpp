#include <iostream>


int f1(int n1){
    std::cout << "Address of n1 in f1 function: " << &n1 << "\n";
    std::cout << "Value of n1 in f1 before modification" << n1 << "\n";
    n1 = 100;
    std::cout << "Value of n1 in f1 after modification" << n1 << "\n";

}