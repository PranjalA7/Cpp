#ifndef ENGINE__H
#define ENGINE__H

#include "EngineType.h"
#include <ostream>


class Engine
{
private:
    std::string _engineId;
    int _horsepower;
    EngineType _engineType;
    float _engineCapacity;
    float _engineTorque;

    
public:
    Engine() = default;
    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;
    Engine(Engine&&) = delete;
    Engine& operator=(Engine&&) = delete;
    ~Engine() = default;

    Engine(std::string id, int hp, EngineType type, float capacity, float torque);

    std::string engineId() const { return _engineId; }
    void setEngineId(const std::string &engineId) { _engineId = engineId; }

    int horsepower() const { return _horsepower; }
    void setHorsepower(int horsepower) { _horsepower = horsepower; }

    EngineType engineType() const { return _engineType; }
    void setEngineType(const EngineType &engineType) { _engineType = engineType; }

    float engineCapacity() const { return _engineCapacity; }
    void setEngineCapacity(float engineCapacity) { _engineCapacity = engineCapacity; }

    float engineTorque() const { return _engineTorque; }
    void setEngineTorque(float engineTorque) { _engineTorque = engineTorque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif // ENGINE__H
