#ifndef HEADER_H
#define HEADER_H

#include<iostream>
//enum for storing slab
enum ElectricitySlabs
{
    E1=125, E2=150, E3=200
};
class Electricity
{
private:
    int sanctionLoad;
    enum ElectricitySlabs els;
    long presentReading;
    long previousReading;
public:
    Electricity();
    void display();
    void accept();
    int calculateElectricityBill();
};

#endif // HEADER_H
//Output func
//Output func
