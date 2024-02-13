#include <vector>
#include <iostream>

int main(){
    std::vector<int> v1{10,20};
    v1[3]=30;

    std::cout << *(++(v1.begin())) + 10;
}