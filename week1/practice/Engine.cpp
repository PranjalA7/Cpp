#include "Engine.h"

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "engineNumber: " << rhs.engineNumber
       << " engineType: " << static_cast<int> (rhs.engineType)
       << " engineHorsepower: " << rhs.engineHorsepower
       << " engineTorque: " << rhs.engineTorque;
    return os;
}

Engine::Engine(std::string number, Engine_Type type, int horsepower, int torque)
    :engineNumber(number), engineType(type), engineHorsepower(horsepower), engineTorque(torque)
{
}
