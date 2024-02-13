#include<iostream>
#include"header.h"
int main()
{
    Conversion conv1;
    Conversion conv2;
    conv1.set_arr();
    conv2=conv1+conv2;
    conv2.display();
    conv2=20+conv1;
    conv2.display();
    ++conv1;
    conv2=conv1++;
    conv1.display();
    conv1.display_arr();
    float p=conv1[1];
    std::cout<<"\n"<<p<<"\n";
    std::cout<<conv1()<<"\n";

    return 0;
}