#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Sensor.h"
#include <list>
#include <memory>

using Pointer =  std::shared_ptr<Sensor>;
using Container = std::list<Pointer>;

void CreateObjects(Container &data);

bool IsReadingValueBelowThreshold(const Container& data);

int CountOfSensorsOfGivenType(const Container& data, SensorType type);

std::string NameOfSensorByIDnType(const Container& data, int id, SensorType type);

Container SensorsWhoSatisfyConditons(const Container& data);

void Display(const Container& data);

#endif // FUNCTIONALITIES_H
