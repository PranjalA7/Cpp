#include "Functionalities.h"

void CreateObjects(CarContainer &carData, EngineContainer &engineData)
{

    engineData[0] = std::make_shared<Engine>(
        200,
        EngineType::PETROL
    );
    carData[0] = std::make_shared<Car>(
        101,
        "Dzire",
        750000.0f,
        engineData[0]
    );

    engineData[1] = std::make_shared<Engine>(
        100,
        EngineType::DIESEL
    );
    carData[1] = std::make_shared<Car>(
        102,
        "City",
        1050000.0f,
        engineData[1]
    );

    engineData[2] = std::make_shared<Engine>(
        70,
        EngineType::HYBRID
    );
    carData[2] = std::make_shared<Car>(
        103,
        "Kia",
        1250000.0f,
        engineData[2]
    );
    
}
