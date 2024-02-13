#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include "Employee.h"
#include <memory>
#include <functional>

using Pointer = std::shared_ptr<Employee>;
using Container = std::vector<Pointer>;

/*
    identifier AverageSalary is a variable name (name of an object)

    if a variable is declared in a file but has to be initiated
    in a separate file, such variables must marked as "extern"
*/

//declaration


extern std::function< float(Container&)> AverageSalary;

#endif // FUNCTIONALITIES_H
