#ifndef DRIVER_H
#define DRIVER_H

#include "License.h"
#include <memory>
#include <ostream>
#include "DriverCategory.h"

using pointer=std::shared_ptr<License>;
using RefType=std::reference_wrapper<pointer>;

class Driver
{
private:
    std::string driverName;
    Driver_Category driverCategory;
    int driverBirthYear;
    RefType driverLicense;

public:
    Driver() = default;
    ~Driver() = default;

    Driver(std::string name, Driver_Category catg, int year, RefType license);

    std::string getDriverName() const { return driverName; }
    void setDriverName(const std::string &driverName_) { driverName = driverName_; }

    Driver_Category getDriverCategory() const { return driverCategory; }
    void setDriverCategory(const Driver_Category &driverCategory_) { driverCategory = driverCategory_; }

    int getDriverBirthYear() const { return driverBirthYear; }
    void setDriverBirthYear(int driverBirthYear_) { driverBirthYear = driverBirthYear_; }

    RefType getDriverLicense() const { return driverLicense; }
    void setDriverLicense(const RefType &driverLicense_) { driverLicense = driverLicense_; }

    friend std::ostream &operator<<(std::ostream &os, const Driver &rhs);

    
};

#endif // DRIVER_H
