#ifndef ENGINE_H
#define ENGINE_H

#include"engineType.h"
#include <ostream>

class Engine
{
private:
    std::string engineNumber {""};
    Engine_Type engineType {Engine_Type::ICT};
    int engineHorsepower {0};
    int engineTorque {0};

public:
    Engine() = default;
    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;
    Engine(Engine&&) = delete;
    Engine& operator=(Engine&&) = delete;
    ~Engine() = default;

    Engine(std::string number, Engine_Type type, int horsepower, int torque);

    std::string getEngineNumber() const { return engineNumber; }
    void setEngineNumber(const std::string &engineNumber_) { engineNumber = engineNumber_; }

    Engine_Type getEngineType() const { return engineType; }
    void setEngineType(const Engine_Type &engineType_) { engineType = engineType_; }

    int getEngineHorsepower() const { return engineHorsepower; }
    void setEngineHorsepower(int engineHorsepower_) { engineHorsepower = engineHorsepower_; }

    int getEngineTorque() const { return engineTorque; }
    void setEngineTorque(int engineTorque_) { engineTorque = engineTorque_; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
    
};

#endif // ENGINE_H
