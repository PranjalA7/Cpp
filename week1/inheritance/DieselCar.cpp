#include "DieselCar.h"

DieselCar::DieselCar(int id, std::string name, float price, VehicleType type, int capacity)
    :Vehicle(id, name, price, type), _fuel_tank_capacity(capacity)
{
}

std::ostream &operator<<(std::ostream &os, const DieselCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}
