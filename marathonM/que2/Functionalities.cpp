#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<TouristVehicle>(
            "MH12PS123",
            VehicleType::CAB,
            5,
            std::make_shared<Permit>("P101", PermitType::LEASE, 1, 100.0f)
        )
    );
    data.emplace_back(
        std::make_shared<TouristVehicle>(
            "MH15PD123",
            VehicleType::BIKE,
            2,
            std::make_shared<Permit>("P102", PermitType::OWNED, 2, 20.0f)
        )
    );
    data.emplace_back(
        std::make_shared<TouristVehicle>(
            "MH18PA123",
            VehicleType::CAB,
            6,
            std::make_shared<Permit>("P103", PermitType::LEASE, 1, 110.0f)
        )
    );
}

Container VehiclesWhoSatisfyConditions(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->seatCount() > 3 && ptr->permit()->permitType() == PermitType::LEASE)
        {
            result.emplace_back(ptr);
        }
    }
    
    if (result.empty()){
        throw std::runtime_error("No vehicle satisfies condition");
    }

    return result;
}

float AveragePermitDurationLeftOfCAB(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    float total = 0.0f;
    int count = 0;
    for (const Pointer& ptr : data)
    {
        if (ptr->type() == VehicleType::CAB)
        {
            total += (float)ptr->permit()->permitDurationLeft();
            count++;
        } 
    }

    if (total == 0.0f){
        throw std::runtime_error("No cab in container");
    }

    return (float)total/(float)count;
}

PermitType VehicleWithMinBookingCharge(const Container &data)
{

    //initial value for mininimum
    float min = (*data.begin())->permit()->permitRenewalCharge();
    PermitType result = (*data.begin())->permit()->permitType();

    for (const Pointer& ptr : data)
    {
        if (ptr->permit()->permitRenewalCharge() < min)
        {
            min = ptr->permit()->permitRenewalCharge();
            result = ptr ->permit()->permitType();
        }
        
    }    
    return result;
}

Container LastNInstancesOfContainer(const Container &data, int lastN)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    Container result;
    for (auto itr = data.rbegin(); lastN>0; itr++, lastN--)
    {
        result.emplace_back(*itr);
    }

    if (result.empty()){
        throw std::runtime_error("Container empty");
    }

    return result;
}

void Display(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }
    
    for (const Pointer& ptr : data){
        std::cout<< *ptr << "\n";
    }
    
}