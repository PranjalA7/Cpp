#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>(
            "Car1", "BMW", CarType::SEDAN,
            std::make_shared<Engine>("w14", EngineType::ICT, 100, 200),
            70000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car2", "Honda", CarType::SEDAN,
            std::make_shared<Engine>("w14", EngineType::ICT, 50, 100),
            50000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car3", "Suzuki", CarType::HATCHBACK,
            std::make_shared<Engine>("w12", EngineType::HYBRID, 70, 30),
            30000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car4", "Baleno", CarType::SUV,
            std::make_shared<Engine>("w17", EngineType::ICT, 100, 20),
            60000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car5", "Porsche", CarType::SPORTS,
            std::make_shared<Engine>("w21", EngineType::HYBRID, 150, 300),
            80000.0f  
        )
    );
}

int engineHorsepowerByCarID(const Container &data, std::string id)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    for(const Pointer& ptr : data){ 
        if (ptr->getCarid() == id)
        {
            return ptr->getCarEngine()->getEngineHorsePower();
        }
    }
    throw std::runtime_error("ID NOT FOUND");
}

Container CarEngineTorqueAbove80(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->getCarEngine()->getEngineTorque() > 80)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No car engine torque above 80 age");
    }

    return result;   
}

Container CarEngineWithSameCarType(const Container &data, CarType t)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->getCarType() == t )
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No car engine torque above 80 age");
    }

    return result;
}

float AverageEngineHorsePower(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    float total = 0.0f;
    for( const Pointer& ptr : data){ 
        if (ptr->getCarEngine()->getEngineType() == EngineType::ICT && ptr->getCarPrice() > 10000)
        {
               total += ptr->getCarEngine()->getEngineHorsePower();     
        }
    }

    return total/data.size(); 
}

// std::string CarIDWithLowestPrice(const Container &data)
// {
//     if (data.empty()){
//         throw std::runtime_error("empty data");
//     }
//     int i=0, minIndex=0;
//     float min = (*data.begin())->getCarPrice();
//     for( const Pointer& ptr : data){
        
//         if (ptr->getCarPrice() < min)
//         {
//             min = ptr->getCarPrice();
//             minIndex = i;
//         }
//         i++;
//     }
    
//     return (data[minIndex])->getCarid();
// }

std::string CarIDWithLowestPrice(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }
    
    float min = (*data.begin())->getCarPrice();
    auto minit = data.begin();
    for( auto it = data.begin(); it != data.end(); it++){
        if ((**it).getCarPrice() < min)
        {
            min = (**it).getCarPrice();
            minit = it;
        }
    }
    
    return (**minit).getCarid();
}

float CarCombinedPrice(const Pointer &car1, const Pointer &car2)
{
    return car1->getCarPrice() + car2->getCarPrice();
}
