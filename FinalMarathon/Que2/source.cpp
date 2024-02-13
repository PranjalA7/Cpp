#include<iostream>
#include"header.h"
//constructor
Conversion::Conversion()
{
    xdistance=10.0f;
    ydistance=10.0f;
    int arr[5]={1,3,5,7,9};
}
//parametrized
Conversion::Conversion(float x, float y, int arr1)
{
    xdistance=x;
    ydistance=y;
    for (int j = 0; j < 5; j++)
    {
        arr[j]=arr[j];
    }
}

//copy constr
Conversion::Conversion(Conversion &c1)
{
    xdistance=c1.xdistance;
    ydistance=c1.ydistance;
    for (int i = 0; i < 5; i++)
    {
        arr[i]=c1.arr[i];
    }
}
//get set func
float Conversion::get_x()
{
    return xdistance;
}
float Conversion::get_y()
{
    return ydistance;
}
void Conversion::set_x(float x)
{
    xdistance=x;
}
void Conversion::set_y(float y)
{
    ydistance=y;
}
//+ overloaded
Conversion Conversion::operator+(Conversion& c1)
{
    Conversion obj;
    obj.xdistance = this->xdistance + c1.xdistance;
    obj.ydistance = this->ydistance + c1.ydistance;
    return obj;
}
//int + obj
Conversion operator+(int x, Conversion &c1)
{
    Conversion obj;
    obj.xdistance = x + c1.xdistance;
    obj.ydistance = x + c1.ydistance;
    return obj;
}
// pre increment
Conversion &Conversion::operator++() 
{
    ++this->xdistance;
    ++this->ydistance;
    return *this;
}
// post increment
Conversion Conversion::operator++(int) 
{
    Conversion temp = *this;
    this->xdistance++;
    this->ydistance++;
    return temp;
}

float Conversion::operator[](int x)
{
    if (x>0&&x<5)
    {
        return arr[x]/100.0f;
        
    }
    else
    {
        std::cout<<"Out of range";
        return -1;
    }

}
//== operator
Conversion Conversion::operator==(Conversion &c1)
{
    Conversion obj;
    obj.xdistance = this->xdistance == c1.xdistance;
    obj.ydistance = this->ydistance == c1.ydistance;
    return obj;
}
//returns average
float Conversion::operator()()
{
    float avg=0;
    for (int k = 0; k < 5; k++)
    {
        avg+=arr[k];
    }
    
    return avg/5.0f;
}
void Conversion::display()
{
    std::cout<<"xdistance= "<<xdistance<<"\n";
    std::cout<<"Ydistance= "<<ydistance<<"\n";
    
}
void Conversion::set_arr()
{
    int n=111;
    for (int m = 0; m < 5; m++)
    {
        arr[m]=n;
        n+=2;
    }
}
void Conversion::display_arr()
{
    for (int a = 0; a< 5; a++)
    {
        std::cout<<arr[a]<<" ";
    }
}
//destructor
// Conversion::~Conversion()
// {
//     delete arr;
// }