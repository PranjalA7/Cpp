#include "Functionalities.h"
#include <algorithm>


void CreateObjects(Container &data)
{
    data[0] = std::make_shared<Engine>("Ferrari", 1500, EngineType::DIESEL, 1.0f, 100);
    data[1] = std::make_shared<Engine>("Porsche", 1700, EngineType::PETROL, 1.5f, 120);
    data[2] = std::make_shared<Engine>("BMW", 1200, EngineType::HYBRID, 3.0f, 70);
}

std::optional<TypeContainer> EngineTypeMatchingCriteria(const Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    TypeContainer result;
    for(const Pointer& ptr : data){
        if (ptr->horsepower() > 1000 && ptr->engineCapacity() < 2.0f)
        {
            result.emplace_back(ptr->engineType());
        }
    }
    
    if (result.empty())
    {
        return std::nullopt;
    }
    
    return result;
}

bool CheckIfTorqueIsAbove110(const Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    bool result = false;

    result = std::any_of(data.begin(), data.end(), 
        [&](const Pointer& ptr){
            return ptr->engineTorque() < 110;
        }
    );

    return result;
}

int CountOfInstancesWithCapacityAboveThreshold(const Container &data, float c)
{
    if(data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    int count = std::count_if(data.begin(), data.end(), 
            [&](const Pointer& ptr){ return ptr->engineCapacity() > c; }
        );
    
    return count;
}
