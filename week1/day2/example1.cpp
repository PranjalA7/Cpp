#include<iostream>

int main()
{
    int n1=10;
    int *ptr=&n1;
    int **sptr=&ptr;

    std::cout<<"N1:"<<n1;
    return 0;

}