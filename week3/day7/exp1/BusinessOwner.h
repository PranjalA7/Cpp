#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H

#include "BusinessType.h"
#include <iostream>

class BusinessOwner
{
private:
    float _expense;
    float _revenue;
    std::string _registered_name;
    BusinessType _type;

public:
    BusinessOwner() = delete;
    ~BusinessOwner() = default;

    BusinessOwner(float exp, float rev, std::string name, BusinessType type);

    float expense() const { return _expense; }

    float revenue() const { return _revenue; }

    std::string registeredName() const { return _registered_name; }

    friend std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs);
};


#endif // BUSINESSOWNER_H
