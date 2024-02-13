#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "TouristVehicle.h"
#include <memory>
#include <list>

using Pointer =  std::shared_ptr<TouristVehicle>;
using Container = std::list<Pointer>;

void CreateObjects(Container &data);

Container VehiclesWhoSatisfyConditions(const Container& data);

float AveragePermitDurationLeftOfCAB(const Container& data);

PermitType VehicleWithMinBookingCharge(const Container& data);

Container LastNInstancesOfContainer(const Container& data, int lastN);

void Display(const Container &data);

#endif // FUNCTIONALITIES_H
