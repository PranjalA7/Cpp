#include "Functionalities.h"

void CreateObjects(DriverContainer &Ddata, LicenseContainer Ldata)
{
    Ldata[0]=std::make_shared<License>("L1", 10, License_Category::COMMERCIAL, "Nashik", "Maharashtra");
    Ddata[0]=std::make_shared<Driver>("Pranjal", Driver_Category::PRIVATE, 2000, Ldata[0]);

    Ldata[1]=std::make_shared<License>("L2", 3, License_Category::PERSONAL, "Pune", "Maharashtra");
    Ddata[1]=std::make_shared<Driver>("Pratik", Driver_Category::COMMERCIAL, 1951, Ldata[1]);

    Ldata[2]=std::make_shared<License>("L3", 13, License_Category::SPECIAL_PURPOSE, "Nashik", "Maharashtra");
    Ddata[2]=std::make_shared<Driver>("Harshal", Driver_Category::PRIVATE, 1959, Ldata[2]);
}

void DisplayLicense(const LicenseContainer Ldata){
    for (auto itr = Ldata.begin(); itr != Ldata.end(); itr++){
        std::cout << *itr << "\n";
    }
}

