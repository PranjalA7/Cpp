#ifndef VEHICLE_H
#define VEHICLE_H

#include"VehicleType.h"
#include<iostream>
class Vehicle
{
private:
    int _id;
    std::string _model_name;
    float _price;
    VehicleType _type;

public:
    Vehicle(int id, std::string model, float price, VehicleType type);
    //1) Default constructor (deleted default constructor)
    Vehicle() = delete;
    //2) Copy constructor (deleted copy construtor)
    Vehicle(const Vehicle&) = delete;
    //3) Copy assignment operator
    Vehicle& operator=(const Vehicle&) = delete;
    //4) Move constructor
    Vehicle(Vehicle&&) = delete;
    //5) Move assignment
    Vehicle& operator=(Vehicle&&) = delete;
    //6) Destructor
    ~Vehicle() = default;

    
    float price();
    int id();
    void display();
    
};

#endif // VEHICLE_H
