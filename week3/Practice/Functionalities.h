#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <list>
#include <memory>
#include <variant>
#include <optional>
#include "Car.h"
#include "Bike.h"

using BikePointer = std::shared_ptr<Bike>;
using CarPointer = std::shared_ptr<Car>;
using VType = std::variant<BikePointer, CarPointer>;

using Container = std::list<VType>;

void CreateObjects(Container& data);

/* 
    Average PRice can be found using visit and total
*/

float AveragePrice(const Container& data);

/*
    Find instance with minimum price (all vehicles have prices which are unique)
*/

// VType InstanceWithMinimumPrice(const Container& data);

/*
    Check if given id is present in any of the instance
*/

bool IfIdExists(const Container& data, std::string id);

/*
    return all instances whose type matches with type passed
*/

std::optional<std::list<VType>> InstancesMatchingType(const Container& data, VehicleType type);


#endif // FUNCTIONALITIES_H
