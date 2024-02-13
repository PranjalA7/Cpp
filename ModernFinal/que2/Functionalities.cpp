#include "Functionalities.h"

void OddNumbersInContainer(const IntContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    bool res = std::any_of(data.begin(), data.end(), 
            [&](int n){ return n%2 != 0; }
        );

    if(res){
        std::cout << "Odd Number/s  [ ";
        for(const int& i : data){
            if (i%2 != 0)
            {
                std::cout << i << " ";
            }
        }
        std::cout << "]\n\n";
    }
    else{
        std::cout << "No odd Numbers found\n\n";
    }
    
}

void CountOfNumberDivisible(const IntContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    int count = std::count_if(data.begin(), data.end(), 
            [&](int n){ return n%4 == 0; }
        );
    if (count)
    {
        std::cout << "Count of numbers divisible is: " << count << "\n\n";
    }
    else
    {
        std::cout << "No number is divisible by 4\n\n";
    }
    
}

Differnt logic use kr ithe
// Func SumOfLargestAndSecondLargest = [](const IntContainer &data){
    
//     IntContainer temp = data;
//     std::sort(temp.begin(), temp.end());
//     std::cout << "Sum of Largest and Second Largest is: " << temp[4] + temp[3] << "\n\n";

// };

Func MinOfContainer = [](const IntContainer &data){

    auto itr = std::min_element(data.begin(), data.end());
    std::cout << "Minimum element is: " << *itr << "\n";
};

void Operation(FuncContainer &data, const IntContainer& arr)
{
    data[0](arr);
    data[1](arr);
    data[2](arr);
    data[3](arr);
}
