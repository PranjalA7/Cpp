#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<functional>
#include<vector>

using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;
using DataContainer = std::vector<int>;
class Set
{
private:
    FnContainer functions;
    DataContainer data;
public:
    Set() = default;
    ~Set() = default;
    Set(FnContainer& fn, DataContainer& d):functions(fn), data(d)
    {}
    
    void operator()()
    {
    
        for(const FnType & fn : functions){
            for(const int & n : data){
                fn(n);
            }
        }
    }

};

void CreateFuncVec1(FnContainer& functions){
    functions.emplace_back(
        [](int number) { std::cout << number * number << "\n";}
    );

    functions.emplace_back(
        [](int number) { std::cout << number * number * number << "\n";}
    );

    functions.emplace_back(
        [](int number) { std::cout << number * 100 << "\n";}
    );
}
void CreateFuncVec2(FnContainer& functions){
    functions.emplace_back(
        [](int number) { std::cout << number + number << "\n";}
    );

    functions.emplace_back(
        [](int number) { std::cout << number + number + number << "\n";}
    );

    functions.emplace_back(
        [](int number) { std::cout << number + 100 << "\n";}
    );
}

#endif // HEADER_H
