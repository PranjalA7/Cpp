#include<iostream>
#include"student.h"
Student::Student()
{
    std::cout<<"\nStudent() called";
    rollno=1;
    sname="Pranjal";

}
Student::Student(int r, std::string nm, std::string ct, int pin, std::string st):
rollno(r),sname(nm),padd(ct, pin, st)
{
    std::cout<<"\nStudent(..........) called";
}
void Student::display()
{
    std::cout<<"\nRoll no: "<<rollno;
    std::cout<<"\nName: "<<sname;
    padd.display();
}

void Student::accept()
{

}
Student::~Student()
{
    std::cout<<"\n ~Student called";
}