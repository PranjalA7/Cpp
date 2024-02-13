#include "Engine.h"

Engine::Engine(std::string id, int hp, EngineType type, float capacity, float torque)
    : _engineId(id), _horsepower(hp), _engineType(type), _engineCapacity(capacity), _engineTorque(torque)
{
    if (_engineTorque < 20 || _engineTorque > 150 || _horsepower < 0)
    {
        std::cout << "Wrong input for Engine Torque or Horsepower\n";
    }
    
}
std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_engineId: " << rhs._engineId
       << " _horsepower: " << rhs._horsepower
       << " _engineType: " << static_cast<int> (rhs._engineType)
       << " _engineCapacity: " << rhs._engineCapacity
       << " _engineTorque: " << rhs._engineTorque;
    return os;
}
