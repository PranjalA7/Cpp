#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"header.h"
class Student
{
    int rollno;
    std::string sname;
    Address padd;

    public:
        Student();
        Student(int, std::string, std::string, int , std::string);
        void display();
        void accept();

        ~Student();
};

#endif // STUDENT_H
