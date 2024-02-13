#include"Vehicle.h"

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _price: " << rhs._price
       << " _type: " <<static_cast<int>(rhs._type);
    return os;
}
//convert something into desired type --> static_cast

Vehicle::Vehicle(int id, std::string name, float price, VehicleType type)
//constructor delegation 
    :Vehicle(id,name,type)
{
    _price = price;
}

Vehicle::Vehicle(int id, std::string name, VehicleType type)
    :_id(id), _name(name), _type(type)
{

}
