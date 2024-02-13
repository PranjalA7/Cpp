#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include "AutoType.h"

class Automobile
{
private:
    std::string _id;
    AutoType _type;
    float _price;
    int _seat_count;
    int _engine_horsepower;

    
public:
    Automobile() = default;
    Automobile(const Automobile&) = delete;
    Automobile& operator=(const Automobile&) = delete;
    Automobile(Automobile&&) = delete;
    Automobile& operator=(Automobile&&) = delete;
    ~Automobile() = default;

    Automobile(std::string id, AutoType type, float price, int seat, int hp);

    float CalculateGST();

    std::string id() const { return _id; }

    AutoType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seat_count; }

    int engineHorsepower() const { return _engine_horsepower; }
};

#endif // AUTOMOBILE_H
