#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include<iostream>
#include"Vehicle.h"

class HybridCar: public Vehicle
{
private:
    int _fuel_tank_capacity;
    int _battery_capacity;

public:

    HybridCar(int id, std::string name, float price, VehicleType type, int capacity, int battery);

    HybridCar()= default;

    HybridCar(const HybridCar&)= delete;

    HybridCar& operator=(HybridCar&)=delete;

    HybridCar(HybridCar&&)=delete;

    HybridCar& operator=(HybridCar&&)=delete;

    ~HybridCar()= default;

    int fuelTankCapacity() const { return _fuel_tank_capacity; }

    int batteryCapacity() const { return _battery_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const HybridCar &rhs);
};

#endif // HYBRIDCAR_H
