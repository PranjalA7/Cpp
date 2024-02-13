#include "Engine.h"

Engine::Engine(std::string engine_num, EngineType type, int hpower, int torque)
    :engineNumber(engine_num), engineType(type), engineHorsePower(hpower), engineTorque(torque)
{
}

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "engineNumber: " << rhs.engineNumber
       << " engineType: " << static_cast<int> (rhs.engineType)
       << " engineHorsePower: " << rhs.engineHorsePower
       << " engineTorque: " << rhs.engineTorque;
    return os;
}
