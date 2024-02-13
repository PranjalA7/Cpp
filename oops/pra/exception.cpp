#include<iostream>
class Product
{
    int pid;
    public:
    Product()
    {
        pid=1;
    }

};
class Hproduct: public Product
{
    int hid;
    public:

    Hproduct(int h)
    {
        hid=h;
    }
};
int main()
{
    // Hproduct P1(5);
    // try
    // {
    //     throw P1;
    // }
    // catch(Product P)
    // {
    //     std::cout << "adasd" << '\n';
    // }
    Product *p=new Hproduct(5);
    try
    {
        throw p;
    }
    catch(Product *pt)
    {
        std::cout << "sf" << '\n';
    }
    
    return 0;
}