#ifndef VEHICLE_H
#define VEHICLE_H

#include "Owner.h"
#include "TouristPermit.h"
#include "PrivatePermit.h"
#include <memory>
#include <variant>
#include <ostream>


using Pointer = std::shared_ptr<Owner>;
using RefType = std::reference_wrapper<Pointer>;
using TouristPointer = std::shared_ptr<TouristPermit>;
using PrivatePointer = std::shared_ptr<PrivatePermit>;
using VType = std::variant<TouristPointer, PrivatePointer>;

class Vehicle
{
private:
    int _id;
    float _price;
    RefType _owner;
    VType _permit;
    
public:
    Vehicle() = default;
    Vehicle(const Vehicle&) = delete;
    Vehicle& operator=(const Vehicle&) = delete;
    Vehicle(Vehicle&&) = delete;
    Vehicle& operator=(Vehicle&&) = delete;
    ~Vehicle() = default;

    Vehicle(int id, float price, RefType owner, VType permit);

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    RefType owner() const { return _owner; }
    void setOwner(const RefType &owner) { _owner = owner; }

    VType permit() const { return _permit; }
    void setPermit(const VType &permit) { _permit = permit; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};

#endif // VEHICLE_H
