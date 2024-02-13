#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<memory>
#include"Vehicle.h"
#include<vector>

//1) create a alias Pointer which is an alternate name
// fro  std::shared_ptr<Vehicle>
using Pointer = std::shared_ptr<Vehicle>;

//2) Now specify alternate container which indicates 
// a standard vector of Pointer where pointer is explained above
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

float AveragePrice(Container& data);

#endif // FUNCTIONALITIES_H
