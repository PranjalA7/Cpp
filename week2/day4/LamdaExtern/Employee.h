#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;
public:
    Employee(int id, std::string name, float salary) 
        :_id(id), _name(name), _salary(salary)
        {}
    ~Employee() = default;

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }
};

#endif // EMPLOYEE_H
