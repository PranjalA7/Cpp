#include<iostream>
#include"header.h"

//default constructor
Electricity::Electricity()
{
    sanctionLoad=1;
    enum ElectricitySlabs els=E1;
    presentReading=100;
    previousReading=100;
}
//calculating electricity bill
int Electricity::calculateElectricityBill()
{
    int elsb,n;
    switch (sanctionLoad)
    {
    case 1:
        elsb=125;
        break;
    case 3:
        elsb=150;
        break;
    case 5:
        elsb=200;
        break;
    }
    n=sanctionLoad*elsb+(presentReading-previousReading)*elsb/100;
    return n;
}
//Output func
void Electricity::display()
{
    std::cout<<"\nDiplaying values";
    std::cout<<"\nSanction Load: "<<sanctionLoad;
    switch (sanctionLoad)
    {
    case 1:
        std::cout<<"\nElectricity Slab: E1";
        break;
    case 3:
        std::cout<<"\nElectricity Slab: E2";
        break;
    case 5:
        std::cout<<"\nElectricity Slab: E3";
        break;
    }
    std::cout<<"\nPresent Reading: "<<presentReading;
    std::cout<<"\nPrevious Reading: "<<previousReading<<"\n";
} 
//Input func
void Electricity::accept()
{
    std::cout<<"Taking Input";
    while (1)
    {
        std::cout<<"\nEnter Sanction Load:(Enter only 1, 3, 5) ";
        std::cin>>sanctionLoad;
        //checking the value of sanctionload
        if (sanctionLoad==1 || sanctionLoad==3 || sanctionLoad==5)
        {
            break;
        }
        std::cout<<"Enter Correct Value";
    }
    if (sanctionLoad==1)
    {
        ElectricitySlabs els=E1;
    }
    else if (sanctionLoad==3)
    {
        ElectricitySlabs els=E2;
    }
    else
    {
        ElectricitySlabs els=E3;
    }
    std::cout<<"Enter Present Reading: ";
    std::cin>>presentReading;
    std::cout<<"Enter Previous Reading: ";
    std::cin>>previousReading;           
}
