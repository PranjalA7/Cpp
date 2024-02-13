#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    
public:
    Employee() {}
    ~Employee() {}

    void PayTax() {
        std::cout << "Employee pays TDS" << "\n";
    }
};

#endif // EMPLOYEE_H
