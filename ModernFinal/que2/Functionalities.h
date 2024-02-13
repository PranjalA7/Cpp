#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include <functional>
#include <vector>
#include <array>
#include <memory>

using IntContainer = std::array<int, 5>;
using Func = std::function<void(const IntContainer&)>;
using FuncContainer = std::vector<Func>;

void OddNumbersInContainer(const IntContainer& data);

void CountOfNumberDivisible(const IntContainer& data);

extern Func SumOfLargestAndSecondLargest;

extern Func MinOfContainer;

void Operation(FuncContainer& data, const IntContainer& arr);

#endif // FUNCTIONALITIES_H
