#include<iostream>
enum ProductType{MobilePhone, Laptop, TV};
class Product
{
    long productid;
    std::string name;
    char *brand=new char[100];
    float price;
    ProductType typeofproduct;
    float taxamount;
    public:
    Product();
    void accept();
    void display();
};