#include "DiselCar.h"
#include"Vehicle.h"
#include<memory>
#include<vector>


std::ostream &operator<<(std::ostream &os, const DiselCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}
DiselCar::DiselCar(int id, std::string name, float price, VehicleType type, int capacity)
    :Vehicle(id, name,price, type), _fuel_tank_capacity(capacity)
{
}

DiselCar::DiselCar(int id, std::string name, VehicleType type, int capacity)
:Vehicle(id,name,type), _fuel_tank_capacity(capacity)
{
}
