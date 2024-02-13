#include <iostream>
#include <array>

int main(){

    std::array<int, 3> arr {100,200,300};

    auto [_id, _salary, _gender] = arr;

    std::cout << _id << "\n";
}