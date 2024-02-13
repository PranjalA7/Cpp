#include<iostream>
class Address
{
    std::string city;
    int pincode;
    std::string state;
    public:
    Address()
    {
        city="Pune";
        pincode=123456;
        state="MH";
        std::cout<<"Address() called";
    }
    Address(std::string ct, int pin, std::string st):city(ct),pincode(pin),state(st)
    {
        std::cout<<"Address(........) called";
    }
    void accept();
    void display();
    ~Address();
};