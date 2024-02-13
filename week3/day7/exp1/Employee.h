#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "EmployeeType.h"

class Employee
{
private:
    std::string _name;
    EmployeeType _type;
    float _salary;

public:
    Employee() = delete;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(const Employee&) = delete;
    ~Employee() = default;

    Employee(std::string name, EmployeeType type, float sal);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    EmployeeType type() const { return _type; }
    void setType(const EmployeeType &type) { _type = type; }

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
