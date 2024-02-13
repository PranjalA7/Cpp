#include "Vehicle.h"

Vehicle::Vehicle(int id, float price, RefType owner, VType permit)
    : _id(id), _price(price), _owner(owner), _permit(permit)
{
}
std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _price: " << rhs._price
       << " _owner: " << *rhs._owner.get();
    return os;
}
