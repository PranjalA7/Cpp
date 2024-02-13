#ifndef EvCar_H
#define EvCar_H

#include"Vehicle.h"
#include <iostream>

class EvCar:public Vehicle
{
private:
    int _battery_capacity;
public:

    EvCar(int id, std::string name, float price, VehicleType type, int capacity);

    EvCar()=default;

    EvCar(const EvCar&)=delete;

    EvCar& operator=(const EvCar&)=delete;

    EvCar(EvCar&& )=delete;

    EvCar& operator=(EvCar&&)= delete;

    ~EvCar()=default;

    int fuelTankCapacity() const { return _battery_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

};

#endif // EvCar_H
