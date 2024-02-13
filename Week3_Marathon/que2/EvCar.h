#ifndef EVCAR_H
#define EVCAR_H

#include "Automobile.h"

class EvCar
{
private:
    std::string _id;
    AutoType _type;
    float _price;
    int _seat_count;
    int _engine_horsepower;
    float _battery_capacity;

public:
    EvCar() = default;
    EvCar(const EvCar&) = delete;
    EvCar& operator=(const EvCar&) = delete;
    EvCar(EvCar&&) = delete;
    EvCar& operator=(EvCar&&) = delete;
    ~EvCar() = default;

    EvCar(std::string id, AutoType type, float price, int seat, int hp, float battery);

    float CalculateGST();

    std::string id() const { return _id; }

    AutoType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seat_count; }

    int engineHorsepower() const { return _engine_horsepower; }

    float batteryCapacity() const { return _battery_capacity; }
};

#endif // EVCAR_H
