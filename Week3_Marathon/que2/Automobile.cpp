#include "Automobile.h"

Automobile::Automobile(std::string id, AutoType type, float price, int seat, int hp)
    :_id(id), _type(type), _price(price), _seat_count(seat), _engine_horsepower(hp)
{
}

float Automobile::CalculateGST()
{
    return _price * 0.18f;
}
