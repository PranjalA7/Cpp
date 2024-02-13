#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "CodeTester.h"
#include <unordered_map>
#include <memory>
#include <variant>
#include <optional>
#include <algorithm>
#include <numeric>


using DevPointer = std::shared_ptr<Developer>;
using TestPointer = std::shared_ptr<CodeTester>;
using VType = std::variant<DevPointer, TestPointer>;
using Container = std::unordered_map<std::string, VType>;

void CreateObjects(Container& data);

std::optional<Container> EmployeesBelowSixYearsExp (const Container& data);

float AverageSalaryOfTester(const Container& data);

int CountOfEmployeesAboveThreshold(const Container& data);

float SalaryOfGivenEmployee(const Container& data, const std::string& id);

bool CheckEmployeesHaveSalaryAboveThreshold(const Container& data);

#endif // FUNCTIONALITIES_H
