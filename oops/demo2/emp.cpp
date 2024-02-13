#include "emp.h"
#include<iostream>
Employee::Employee()
{
    empid=1001;
    empname="Joy";
    basicsalary=25000.00;
}

Employee::Employee(int em, std::string en, double bs)
:empid(em), empname(en), basicsalary(bs)
{
    calculateAllowances();
}

void Employee::accept()
{
}

void Employee::display()
{
    std::cout<<"\nEmployee ID: "<<empid;
    std::cout<<"\nName: "<<empname;
    std::cout<<"\nBasic Salary: "<<basicsalary;
    std::cout<<"\nNet Salary: "<<calNetSalary();
}   

Employee::~Employee()
{
}

double Employee::calNetSalary()
{
    return (basicsalary-pf-ptax-hrallow-foodallow);
}
