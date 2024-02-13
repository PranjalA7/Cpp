#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include "Passenger.h"

using PassPointer = std::shared_ptr<Passenger>;
using Container = std::vector<PassPointer>;

void CreatObjects(Container& data);
void DisplayDetailsOfPassengerByID(const Container& data, Variant id);
void DisplayDetailsOfPassengerByFare(const Container& data, float fare);

#endif // FUNCTIONALITIES_H
