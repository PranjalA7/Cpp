#include "Driver.h"

Driver::Driver(std::string name, Driver_Category catg, int year, RefType license)
    :driverName(name), driverCategory(catg), driverBirthYear(year), driverLicense(license)
{
    if (year < 1947 || year > 2023)
    {
        throw std::runtime_error("Birth year is invalid");
    }
}
std::ostream &operator<<(std::ostream &os, const Driver &rhs) {
    os << "driverName: " << rhs.driverName
       << " driverCategory: " << static_cast<int> (rhs.driverCategory)
       << " driverBirthYear: " << rhs.driverBirthYear
       << " driverLicense: " << rhs.driverLicense.get();
    return os;
}
