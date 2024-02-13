#include<iostream>
#include"emp.h"
class Salesperson:Employee
{
    double saleamount;
    double commrate;

    public:
    Salesperson();
    Salesperson(int , std::string, double);
    ~Salesperson();

};