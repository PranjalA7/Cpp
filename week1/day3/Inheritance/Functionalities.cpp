#include "Functionalities.h"
#include"PetrolCar.h"
#include"DiselCar.h"
#include"EvCar.h"
#include"HybridCar.h"
void CreateObjects(Container &data)
{
    // //step 1: make a constructor call to PetrolCar
    
    // Petrolcar(101,"City",1400.0f,VehicleType::PERSONAL,43);

    // //step 2:

    // Vehicle* ptr = Petrolcar(101,"City",1400.0f,VehicleType::PERSONAL,43);


    // data.emplace_back(Container &data)   {ptr}  //place something on back of container

    //short version through smart pointer
    data.emplace_back(
        std::make_shared<PetrolCar>(101,"City",140000.0f,VehicleType::PERSONAL,43)
    );


    data.emplace_back(
        std::make_shared<DiselCar>(104,"Disel_City",34000.0f, VehicleType::PERSONAL, 12)
    );

    data.emplace_back(
        std::make_shared<EvCar>(105,"EvCity",10000.0f, VehicleType::PERSONAL,56)
    );

    // data.emplace_back(
    //     std::make_shared<HybridCar>(106,"HybridCity",VehicleType::PERSONAL,45,67)
    // );

}

float AveragePrice(Container &data)
{
    float sum=0;
    for (auto i=data.begin(); i!=data.end(); i++)
    {
        sum+=(**i).getPrice();
    }

    return sum/data.size();
}


//upcasting
//child obj can be attached to base class pointer i.e. upcasting