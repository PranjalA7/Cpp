#ifndef BIKE_H
#define BIKE_H

#include "CarType.h"
#include <string>
#include <ostream>

class Bike
{
private:
    std::string _id;
    float _price;
    VehicleType _type;

public:
    Bike() = default;
    ~Bike() = default;

    Bike(std::string id, float price, VehicleType type);

    std::string id() const { return _id; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
};

#endif // BIKE_H
