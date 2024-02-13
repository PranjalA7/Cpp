#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "EvCar.h"
#include <memory>
#include <vector>
#include <variant>
#include <future>


using AutoPointer = std::shared_ptr<Automobile>;
using EvPointer = std::shared_ptr<EvCar>;

using VType = std::variant<AutoPointer, EvPointer>;

using Container = std::vector<VType>;

void CreateObjects(Container& data);

int DisplaySeatCount(const Container &data, std::future<std::string> &ft);

void AutoMobileInstancesBelowHP600(const Container & data);

void AveragePriceOfAutomobileInstances(const Container& data);

void TotalGSTOfAllInstances(const Container& data);

#endif // FUNCTIONALITIES_H
