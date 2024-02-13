#include "Bike.h"

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << "_id: " << rhs._id
       << " _price: " << rhs._price;
    return os;
}

Bike::Bike(std::string id, float price, VehicleType type)
    :_id(id), _price(price), _type(type)
{
}
