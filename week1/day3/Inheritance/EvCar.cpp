#include "EvCar.h"
#include"Vehicle.h"
#include<memory>
#include<vector>


std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel_tank_capacity: " << rhs._battery_capacity;
    return os;
}
EvCar::EvCar(int id, std::string name, float price, VehicleType type, int capacity)
    :Vehicle(id, name,price, type), _battery_capacity(capacity)
{
}

EvCar::EvCar(int id, std::string name, VehicleType type, int capacity)
:Vehicle(id,name,type), _battery_capacity(capacity)
{
}
