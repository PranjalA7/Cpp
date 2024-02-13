#include <functional>
#include <iostream>
#include <vector>

void magic(std::reference_wrapper<int> n1) {

    std::cout << "Address of n1 in magic " << &(n1.get()) << "\n";
    std::vector<std::reference_wrapper<int> > v1 { n1 };
    //if we are using reference wrapper to get value from inside it use .get()
}

/*
    instantiatiang via assignment a new object called ref. Data type
    of ref is stdd::reference_wrapper<T> 

    n1 ka reference gya box mai box ka nam ref


    Reference wrapper is convertible to the normal reference
*/


int main() {

    int n1 = 10;
    std::cout << "Address of n1 in main " << &n1 << "\n";
    magic(n1);
    
}