#ifndef OWNER_H
#define OWNER_H

#include "OwnerType.h"
#include <iostream>

class Owner
{
private:
    std::string _name;
    std::string _city;
    OwnerType _type;
public:
    Owner() = default;
    Owner(const Owner&) = delete;
    Owner& operator=(const Owner&) = delete;
    Owner(Owner&&) = delete;
    Owner& operator=(Owner&&) = delete;
    ~Owner() = default;
    
    Owner(std::string name, std::string city, OwnerType type);

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string city() const { return _city; }
    void setCity(const std::string &city) { _city = city; }

    OwnerType type() const { return _type; }
    void setType(const OwnerType &type) { _type = type; }

    friend std::ostream &operator<<(std::ostream &os, const Owner &rhs);
};

#endif // OWNER_H
