#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>("c101", 890000.0f, VehicleType::SEDAN)
    );

    data.emplace_back(
        std::make_shared<Car>("c102", 650000.0f, VehicleType::HATCHBACK)
    );

    data.emplace_back(
        std::make_shared<Car>("c103", 190000.0f, VehicleType::SEDAN)
    );

    data.emplace_back(
        std::make_shared<Bike>("b201", 190000.0f, VehicleType::COMMUTE)
    );

    data.emplace_back(
        std::make_shared<Bike>("b202", 90000.0f, VehicleType::COMMUTE)
    );
}

float AveragePrice(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }

    float totalPrice = 0.0f;
    for (const VType& v : data) {
        
        std::visit(
            [&](auto&& val){
                totalPrice =+ val->price();
            },
            v
        );
    }
    
    return totalPrice / data.size();
}

bool IfIdExists(const Container &data, std::string id)
{
    if (data.empty())
    {
        throw std::runtime_error("empty data");
    }

    bool flag = false;

    for (VType v : data) {
        std::visit(
            [&](auto&& val){ if(val->id() == id) { flag = true; }},
            v
        );
    }

    return flag;
}

std::optional<std::list<VType>> InstancesMatchingType(const Container& data, VehicleType type){
    if (data.empty())
    {
        throw std::runtime_error("Error as data is empty");
    }

    Container result;
    for (const VType& v : data){
        std::visit(
            [&](auto&& val){ if(val->type() == type){ result.emplace_back(val); } },
            v
        );
    }

    if (result.empty())
    {
        return std::nullopt;
    }

    return result;
}


// VType InstanceWithMinimumPrice(const Container& data)
// {

// }

