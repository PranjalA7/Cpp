#include "Car.h"
#include <vector>

using Pointer = std::shared_ptr<Car>;

using Container = std::vector<Pointer>;

void createObjects (Container& data);

int EngineHorsepowerByCarID(const Container& data, std::string id);

Container& CarEngineTorqueOver80(const Container& data);

Container& CarsWithSameCarType(const Container& data, Car_Type type);

float AverageHorsepower(Container& data);

std::string CarIDWithLowestPrice(Container& data);

float CombinedCarPrice(Pointer& car1, Pointer& car2);