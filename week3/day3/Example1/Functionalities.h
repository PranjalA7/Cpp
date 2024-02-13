#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include <memory>
#include <variant>
#include "Employee.h"
#include "BussinessOwner.h"

using EmpPointer = std::shared_ptr<Employee>;
using BussinessPointer = std::shared_ptr<BussinessOwner>;

using VType = std::variant<EmpPointer, BussinessPointer>;

using Container = std::vector<VType>;

void CreateObjects(Container& data){
    data.emplace_back(
        std::make_shared<Employee>()
    );

    data.emplace_back(
        std::make_shared<BussinessOwner>()
    );
}

#endif // FUNCTIONALITIES_H
/*
    if you want to access variant you must use visit
*/