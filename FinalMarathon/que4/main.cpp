#include <iostream>
#include"header.h"
int main()
{
    Product *P=new Product[3];
    P[0].accept();
    P[0].display();
    P[1].display();
    delete[] P;
    
    return 0;
}