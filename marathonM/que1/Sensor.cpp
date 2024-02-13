#include "Sensor.h"

Sensor::Sensor(int id, std::string name, SensorType type, int reading)
    :_id(id), _name(name), _type(type)
{
    if (reading < 0 || reading > 20 || reading%10==0) {
        throw std::out_of_range("Reading must be non-negative int between 0 and 20.");
    }
    _reading = reading;
}

std::ostream &operator<<(std::ostream &os, const Sensor &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _type: " << static_cast<int> (rhs._type)
       << " _reading: " << rhs._reading;
    return os;
}
