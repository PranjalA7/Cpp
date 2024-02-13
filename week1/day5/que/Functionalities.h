#include<vector>
#include<memory>
#include"Car.h"

using Pointer =  std::shared_ptr<Car>;
using Container = std::vector<Pointer>;

void CreateObjects(Container &data);

int engineHorsepowerByCarID(const Container& data, std::string id);

Container CarEngineTorqueAbove80(const Container &data);

Container CarEngineWithSameCarType(const Container &data, CarType t);

float AverageEngineHorsePower(const Container &data);

std::string CarIDWithLowestPrice(const Container &data);

float CarCombinedPrice(const Pointer& car1, const Pointer& car2);