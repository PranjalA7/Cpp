#ifndef ENGINE_H
#define ENGINE_H

#include"EngineType.h"
#include <ostream>

class Engine
{
private:
    std::string engineNumber{""};
    EngineType engineType{EngineType::ICT};
    int engineHorsePower{0};
    int engineTorque{0};

public:
    Engine() = default;
    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;
    Engine(Engine&&) = delete;
    Engine& operator=(Engine&&) = delete;
    ~Engine() = default;

    Engine(std::string engine_num, EngineType type, int hpower, int torque);

    std::string getEngineNumber() const { return engineNumber; }
    void setEngineNumber(const std::string &engineNumber_) { engineNumber = engineNumber_; }

    EngineType getEngineType() const { return engineType; }
    void setEngineType(const EngineType &engineType_) { engineType = engineType_; }

    int getEngineHorsePower() const { return engineHorsePower; }
    void setEngineHorsePower(int engineHorsePower_) { engineHorsePower = engineHorsePower_; }

    int getEngineTorque() const { return engineTorque; }
    void setEngineTorque(int engineTorque_) { engineTorque = engineTorque_; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif // ENGINE_H
