#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    std::string _name;
    std::string _id;
    float _salary;

public:
    Employee() = default;
    Employee(const Employee&) = delete;
    Employee& operator=(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(Employee&&) = delete;
    ~Employee() = default;

    virtual float CalculateBonus() = 0;

    Employee(std::string name, std::string id, float salary);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
