#include<iostream>
#include<cstring>
#include"header.h"
#include <cstdio>
Product::Product()
{
    productid=1;
    name="L123";
    strcpy(brand, "Lenovo");
    price=70000.0f;
    typeofproduct=Laptop;
    taxamount=3500;
}

void Product::accept()
{
    std::cout<<"Enter product ID: ";
    std::cin>>productid;
    std::cout<<"Enter product Name: ";
    std::cin>>name;
    std::cout<<"Enter product Brand: ";
    std::cin>>brand;
    std::cout<<"Enter product Price: ";
    std::cin>>price;
    std::cout<<"Enter product type(1 Mobile 2 Laptop 3 TV): ";
    int t;
    std::cin>>t;
    ProductType typeofproduct=static_cast<ProductType>(t);
    if (price>10000.0f)
        taxamount=price*0.05f;
    else
        taxamount=0.0f;
}

void Product::display()
{
    std::cout<<"Product ID: "<<productid<<"\n";
    std::cout<<"Product Name: "<<name<<"\n";
    std::cout<<"Product Brand: "<<brand<<"\n";
    std::cout<<"Product Price: "<<price<<"\n";
    switch (typeofproduct)
    {
    case 0:
        std::cout<<"Product type: Mobile Phone"<<"\n";
        break;
    case 1:
        std::cout<<"Product type: Laptoop"<<"\n";
        break;
    case 2:
        std::cout<<"Product type: TV"<<"\n";
        break;
    }
    std::cout<<"Tax amount: "<<taxamount<<"\n";
}
