#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"
#include <vector>
#include <array>

using VehPointer = std::shared_ptr<Vehicle>;
using Container = std::array<VehPointer, 5>;
using OwnerContainer = std::array<Pointer, 5>;


void CreateObjects(Container& data, OwnerContainer &Odata);

void PermitOfGivenID(const Container& data, int id);
void OwnerOfGivenID(const Container& data, int id);

#endif // FUNCTIONALITIES_H
