#include "EvCar.h"

EvCar::EvCar(int id, std::string name, float price, VehicleType type, int capacity)
    :Vehicle(id, name, price, type), _battery_capacity(capacity)
{
}
std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _battery_capacity: " << rhs._battery_capacity;
    return os;
}
