#include "functionalities.h"

void createObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>(
            "Car1", "BMW", Car_Type::SEDAN,
            std::make_shared<Engine>("w14", Engine_Type::ICT, 100, 200),
            70000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car2", "Honda", Car_Type::SEDAN,
            std::make_shared<Engine>("w14", Engine_Type::ICT, 50, 100),
            50000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car3", "Suzuki", Car_Type::HATCHBACK,
            std::make_shared<Engine>("w12", Engine_Type::HYBRID, 70, 30),
            30000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car4", "Baleno", Car_Type::SUV,
            std::make_shared<Engine>("w17", Engine_Type::ICT, 100, 20),
            60000.0f  
        )
    );
    data.emplace_back(
        std::make_shared<Car>(
            "Car5", "Porsche", Car_Type::SPORTS,
            std::make_shared<Engine>("w21", Engine_Type::HYBRID, 150, 300),
            80000.0f  
        )
    );
}

int EngineHorsepowerByCarID(const Container &data, std::string id)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    for(const Pointer& ptr : data){
        if (ptr->getCarId() == id)
        {
            return ptr->getCarEngine()->getEngineHorsepower();
        }
    }

    throw std::runtime_error("ID NOT FOUND");
}

Container &CarEngineTorqueOver80(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    Container result;
    for(const Pointer& ptr : data){
        if (ptr->getCarEngine()->getEngineTorque() > 80)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty()){
        throw std::runtime_error("No Car has Torque over 80");
    }
}

Container& CarsWithSameCarType(const Container &data, Car_Type type)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->getCarType() == type)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No Car matches with this type");
    }

    return result;
}


float AverageHorsepower(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    float total = 0.0f;
    for( const Pointer& ptr : data){ 
        if (ptr->getCarEngine()->getEngineType() == Engine_Type::ICT && ptr->getCarPrice() > 10000)
        {
               total += ptr->getCarEngine()->getEngineHorsepower();     
        }
    }

    return total/data.size(); 
}

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
    
    return (**minit).getCarId();
}

float CombinedCarPrice(const Pointer &car1, const Pointer &car2)
{
    return car1->getCarPrice() + car2->getCarPrice();
}
