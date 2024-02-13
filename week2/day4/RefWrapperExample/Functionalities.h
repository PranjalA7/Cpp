#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"
#include <memory>
#include <array>

using CarPointer = std::shared_ptr<Car>;
using CarContainer = std::array<CarPointer, 3>;


using EnginePointer = std::shared_ptr<Engine>;
using EngineContainer = std::array<EnginePointer, 3>;




void CreateObjects(CarContainer& carData, EngineContainer& engineData);


#endif // FUNCTIONALITIES_H
