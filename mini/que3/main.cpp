#include <iostream>
#include<cstring>
class Student
{ 
    int rollno;
    char *sname;
    int arr[3];
    
    public:
    Student();
    Student::Student(int no,const char *nm,int arr[]):rollno(no);    
};
Student::Student()//default constructor
{
    rollno=1;
    strcpy(sname,"Pranjal");
    arr[0]=0;
    arr[1]=0;
    arr[2]=0;
}
//parameterized constructor
Student::Student(int no,const char *nm,int arr[]):rollno(no)
{
    strcpy(sname,nm);
}

int main(){

    return 0;
}