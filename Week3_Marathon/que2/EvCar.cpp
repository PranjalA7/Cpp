#include "EvCar.h"

EvCar::EvCar(std::string id, AutoType type, float price, int seat, int hp, float battery)
    :_id(id), _type(type), _price(price), _seat_count(seat), _engine_horsepower(hp), _battery_capacity(battery)
{
}

float EvCar::CalculateGST()
{
    return _price * 0.1f;
}
