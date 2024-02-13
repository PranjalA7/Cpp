#include<iostream>
#include"Vehicle.h"
#include"Functionalities.h"

int main()
{
    Container d;
    CreateObjects(d);
    float ans=AveragePrice(d);
    //std::cout<<**(d.begin());
    std::cout<<ans;
    // for (auto it=d.begin(); it!=d.end(); it++)
    // {
    //     std::cout<<(**it)<<"\n";
    // }
    return 0;
}