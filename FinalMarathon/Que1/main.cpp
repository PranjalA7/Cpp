#include<iostream>
#include"header.h"
int main()
{
    Inventory *inv=new Inventory[3];
    inv[1].accept();
    //purchase
    purchase(inv);
    std::cout<<inv[1];
    //sale
    sale(inv);
    std::cout<<inv[0]<<"\n";
    search(inv);
    
    delete inv;
    return 0;
}