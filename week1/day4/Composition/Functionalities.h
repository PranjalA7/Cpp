#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<memory>
#include<iostream>
#include"Customer.h"

using Pointer =  std::shared_ptr<Customer>;
using Container = std::vector<Pointer>;

void CreateObjects(Container &data);


#endif // FUNCTIONALITIES_H
