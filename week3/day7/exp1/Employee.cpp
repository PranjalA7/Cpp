#include "Employee.h"

Employee::Employee(std::string name, EmployeeType type, float sal)
    :_name(name), _type(type), _salary(sal)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_name: " << rhs._name
       << " _salary: " << rhs._salary;
    return os;
}
