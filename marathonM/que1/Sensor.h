#ifndef SENSOR_H
#define SENSOR_H

#include "SensorType.h"
#include <ostream>

class Sensor
{
private:
    int _id {0};
    std::string _name {""};
    SensorType _type {SensorType::TYRE_PRESSURE};
    int _reading {1};

public:
    Sensor() = default;
    Sensor(const Sensor&) = delete;
    Sensor& operator=(const Sensor&) = delete;
    Sensor(Sensor&&) = delete;
    Sensor& operator=(Sensor&&) = delete;
    ~Sensor() = default;

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    SensorType type() const { return _type; }
    void setType(const SensorType &type) { _type = type; }

    int reading() const { return _reading; }
    void setReading(int reading) { _reading = reading; }

    Sensor(int id, std::string name, SensorType type, int reading);

    friend std::ostream &operator<<(std::ostream &os, const Sensor &rhs);
    
};

#endif // SENSOR_H
