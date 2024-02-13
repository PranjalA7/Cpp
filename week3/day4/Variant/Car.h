

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "CarType.h"

class Car
{
private:
    std::string _id;
    float _price;
    VehicleType _type;

public:
    Car() = default;

    ~Car() = default;


    Car(std::string id, float price, VehicleType type);

    std::string id() const { return _id; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};


#endif // CAR_H
