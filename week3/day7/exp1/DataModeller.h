#ifndef DATAMODELLER_H
#define DATAMODELLER_H

#include <variant>
#include "Employee.h"
#include "BusinessOwner.h"
#include <memory>
#include <vector>
#include <ostream>

using BusinessPointer = std::unique_ptr<BusinessOwner>;
using EmpPointer = std::unique_ptr<Employee>;
using VType = std::variant<BusinessPointer, EmpPointer>;

class DataModeller
{
private:
    VType _instance;
    std::vector<float> _goodsPrices;
public:

    DataModeller(VType v, const std::vector<float>& prices);
    void operator()();
    DataModeller() = delete;
    DataModeller(const DataModeller&) =delete;
    DataModeller(const DataModeller&&) = delete;
    DataModeller& operator=(const DataModeller&) = delete;
    DataModeller& operator=(DataModeller&&) = delete;
    ~DataModeller() = default;

    const VType& instance() const { return _instance; }

    std::vector<float> goodsPrices() const { return _goodsPrices; }

    friend std::ostream &operator<<(std::ostream &os, const DataModeller &rhs);

    
};

#endif // DATAMODELLER_H
