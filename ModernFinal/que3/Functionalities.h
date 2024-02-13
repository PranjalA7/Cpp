#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "FullTimeEmployee.h"
#include <list>
#include <memory>
#include <future>
#include <condition_variable>
#include <optional>

extern std::mutex mt;
extern bool flag;
extern std::condition_variable cv;

using Pointer = std::shared_ptr<FullTimeEmployee>;
using Container = std::list<Pointer>;

void CreateObjects(Container& data);

void BonusOfAllEmoloyees(const Container& data);

void HighestSalaryEmployee(const Container &data);

void EmployeesWithGivenGrade(const Container &data, Grade& gr);

std::string ProjectNameOfGivenEmployee(const Container &data, std::future<std::string>& ft);

#endif // FUNCTIONALITIES_H
