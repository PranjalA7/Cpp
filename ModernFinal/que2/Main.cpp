#include "Functionalities.h"

int main(){

    IntContainer arr{1, 2, 3, 4, 5};
    FuncContainer Funcs{OddNumbersInContainer, CountOfNumberDivisible, SumOfLargestAndSecondLargest, MinOfContainer};
    Operation(Funcs, arr);
}