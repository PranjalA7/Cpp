/*
    a container of 3 func
    then run a loop over the container to execute the functions

       DATA
     |   |   |
    f1   f2  f3
     |   |   |
     o1  o2  o3

*/

#include<iostream>
#include<functional>
#include<vector>

using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;

void MakeLambdaFunc(FnContainer& functions){
    functions.emplace_back(
        [](int number) { std::cout << number * number << "\n";}
    );

    functions.emplace_back(
        [](int number) { std::cout << number * number * number << "\n";}
    );
}


void ApplyLogicOnData(FnContainer functions, int data)
{
    for(FnType & fn : functions){
        fn(data);
    }
}

int main(){
    FnContainer functions;
    MakeLambdaFunc(functions);
    ApplyLogicOnData(functions, 5);

}