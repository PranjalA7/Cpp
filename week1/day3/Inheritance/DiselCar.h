#ifndef DISELCAR_H
#define DISELCAR_H

#include<iostream>
#include"Vehicle.h"

class DiselCar : public Vehicle
{

    private:
    int _fuel_tank_capacity;

    public:
    

    DiselCar(int id, std::string name, float price, VehicleType type, int capacity);

    DiselCar(int id, std::string name, VehicleType type, int capacity);

    DiselCar();

    DiselCar(const DiselCar&) = delete;

    DiselCar& operator = (const DiselCar&) = delete;

    DiselCar(DiselCar&&) = delete;

    DiselCar& operator = (DiselCar&&) = delete;

    ~DiselCar() = default; 

    int fuelTankCapacity() const { return _fuel_tank_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const DiselCar &rhs);

    

};


#endif // DISELCAR_H
