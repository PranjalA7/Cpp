#ifndef HEADER_H
#define HEADER_H

#include<iostream>

class Flight
{
private:
    long FlightNum;
    float Distance;
    float Fuel;
    float Fare;
    static int k;
public:
    Flight();
    Flight(long fn,float d, float fa);
    void feedInfo();
    void showInfo();
    int calculateTotalFlightObjects();
    int calculateFuelQuantity();
    int search();
    
};

#endif // HEADER_H
