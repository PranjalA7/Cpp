#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Engine.h"
#include <array>
#include <memory>
#include <vector>
#include <optional>

using Pointer = std::shared_ptr<Engine>;
using Container = std::array<Pointer, 3>;
using TypeContainer = std::vector<EngineType>;

void CreateObjects(Container& data);

std::optional<TypeContainer> EngineTypeMatchingCriteria(const Container& data);

bool CheckIfTorqueIsAbove110(const Container& data);

int CountOfInstancesWithCapacityAboveThreshold(const Container& data, float c);




#endif // FUNCTIONALITIES_H
