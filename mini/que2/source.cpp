#include<iostream>
#include"header.h"
//default constructor
int Flight::k=0;
Flight::Flight()
{
    FlightNum=100;
    Distance=100;
    Fuel=100;
    Fare=100;
}
//parametrized contructor
Flight::Flight(long fn,float d, float fa)
{
    FlightNum=fn;
    Distance=d;
    Fare=fa;
}

int i=0;
//input
void Flight::feedInfo()
{
    std::cout<<"Enter Flight Number: ";
    std::cin>>FlightNum;
    std::cout<<"Enter Distance: ";
    std::cin>>Distance;
    Fuel=calculateFuelQuantity();
    std::cout<<"Enter Fare: ";
    std::cin>>Fare;
    i++;
    k++;
}
//output
void Flight::showInfo()
{
    std::cout<<"\nFlight number: "<<FlightNum;
    std::cout<<"\nDistance: "<<Distance;
    std::cout<<"\nFuel: "<<Fuel;
    std::cout<<"\nFare: "<<Fare;
}
//searching by flight number
int Flight::search()
{
    int num, b=-1;;
    std::cout<<"\nEnter the Flight No. ";
    std::cin>>num;
    Flight obj;
    for (int a = 0; a < i; a++)
    {
        
        if (num==FlightNum)
        {
            b=a; 
            break;
        }
    }
    return b;
    
}
//fuel required
int Flight::calculateFuelQuantity()
{
    if (Distance<=10000)
    {
        Fuel=5000;
    }
    else if (Distance<=20000)
    {
        Fuel=11000;
    }
    else
    {
        Fuel=22000;
    }
    return Fuel;
}
int Flight::calculateTotalFlightObjects()
{
    return k;
}