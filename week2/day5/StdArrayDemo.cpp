#include <array>
#include <iostream>

int main() {

    std::array<int, 3> arr1;

    for (int i = 0; i < 3; i++)
    {
        arr1[i] = (i + 1) * 100;
    }
    
    for (int val : arr1)
    {
        std::cout << val << " ";
    }

    std::cout << "First number: " << arr1.front() << "\n";
    std::cout << "last number: " << arr1.back() << "\n";

    std::array< std::array<int, 2>, 3> arr2d{
        std::array <int, 2> {70, 30},  
        std::array <int, 2> {40, 50},
        std::array <int, 2> {60, 70},
    };

    for (std::array<int, 2>& row : arr2d){
        for (int element : row){
            std::cout << element << "\n";
        }
    }
    std::cout << arr2d[1][1] << "\n";
}