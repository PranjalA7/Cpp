#include "Functionalities.h"
#include"PetrolCar.h"
#include<memory>
void CreateObjects(Container &data)
{
    //1) Make constructor call to PetrolCar
    
    data.emplace_back(
        std::make_shared<PetrolCar>(101, "City", 1400000.0f, VehicleType::PERSONAL, 43)
    );
    data.emplace_back(
        std::make_shared<PetrolCar>(102, "Dzire", 900000.0f, VehicleType::PERSONAL, 43)
    );
    data.emplace_back(
        std::make_shared<PetrolCar>(103, "Baleno", 950000.0f, VehicleType::PERSONAL, 45)
    );
}

float AveragePrice(Container &data)
{
    return 0.0f;
}
