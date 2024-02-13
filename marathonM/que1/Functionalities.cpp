#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Sensor>(
            101,
            "Sensor1",
            SensorType::TEMPERATURE,
            5
        )
    );
    data.emplace_back(
        std::make_shared<Sensor>(
            102,
            "Sensor2",
            SensorType::TYRE_PRESSURE,
            17
        )
    );
    data.emplace_back(
        std::make_shared<Sensor>(
            103,
            "Sensor3",
            SensorType::TYRE_PRESSURE,
            18
        )
    );
    data.emplace_back(
        std::make_shared<Sensor>(
            104,
            "Sensor4",
            SensorType::CABIN_PRESSURE,
            16
        )
    );
    data.emplace_back(
        std::make_shared<Sensor>(
            105,
            "Sensor5",
            SensorType::TEMPERATURE,
            11
        )
    );
}

bool IsReadingValueBelowThreshold(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    for (const Pointer& ptr : data)
    {
        if (ptr->reading() > 25)
        {
            return false;
        }
    }
    return true;
}

int CountOfSensorsOfGivenType(const Container &data, SensorType type)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    int count = 0;
    for (const Pointer& ptr : data)
    {
        if (ptr->type() == type)
        {
            count++;
        }
    }
    return count;
}

std::string NameOfSensorByIDnType(const Container &data, int id, SensorType type)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    for (const Pointer& ptr : data)
    {
        if (ptr->id() == id && ptr->type() == type)
        {
            return ptr->name();
        }
    }
    
    throw std::runtime_error("Sensor not found"); 
}

Container SensorsWhoSatisfyConditons(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }
    
    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->reading() > 15 && ptr->type() == SensorType::TYRE_PRESSURE)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty()){
        throw std::runtime_error("No sensor satisfies conditions");
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
