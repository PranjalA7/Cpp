#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Driver.h"
#include <vector>

using DriverPointer = std::shared_ptr<Driver>;
using DriverContainer = std::array<DriverPointer, 3>;

using LicensePointer = std::shared_ptr<License>;
using LicenseContainer = std::array<LicensePointer, 3>;


void CreateObjects(DriverContainer& Ddata, LicenseContainer Ldata);

auto FirstTwoInstancesOFLincense = [](DriverContainer & data){
    if (data.empty())
    {
        throw std::runtime_error("data empty");
    }

    LicenseContainer result;
    int count = 0;
    for (const DriverPointer& ptr : data)
    {
        if (ptr->getDriverBirthYear() < 1961)
        {
            result[count] = ptr->getDriverLicense();
            count++;
        }
        if (count == 2)
        {
            return result;
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No birth year is below threshold");
    }

    return result;
    
};

// auto DriverInstanceswithGivenCAtegory = [](DriverContainer data){
//     if (data.empty())
//     {
//         throw std::runtime_error("data empty");
//     }

//     LicenseContainer result;
//     int count = 0;
//     for (const DriverPointer& ptr : data)
//     {
//         if (ptr->getDriverLicense().get()->getLincenseCategory() ==  )
//         {
//             result.emplace_back((ptr->getDriverLicense()).get());
//             count++;
//         }
//         if (count == 2)
//         {
//             return result;
//         }
//     }

//     if (result.empty())
//     {
//         throw std::runtime_error("No birth year is below threshold");
//     }

//     return result;
    
// };

// };

void DisplayLicense(const LicenseContainer Ldata);


#endif // FUNCTIONALITIES_H
