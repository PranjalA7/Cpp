#include "BusinessOwner.h"

BusinessOwner::BusinessOwner(float exp, float rev, std::string name, BusinessType type)
    :_expense(exp), _revenue(rev), _registered_name(name), _type(type)
{
}
std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs) {
    os << "_expense: " << rhs._expense
       << " _revenue: " << rhs._revenue
       << " _registered_name: " << rhs._registered_name
       << " _type: " << static_cast<int> (rhs._type);
    return os;
}
