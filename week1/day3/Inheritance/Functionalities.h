#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<memory>
#include"Vehicle.h"
#include<vector>

//step 1: Create alias "Pointer" which is an alternative name
//for std::shared_ptr to vehicle
using Pointer =  std::shared_ptr<Vehicle>;


//step 2: now specify altername Container which indicates
//a standard vector of "Pointer" where pointer is explained above
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

float AveragePrice(Container& data);


#endif // FUNCTIONALITIES_H


