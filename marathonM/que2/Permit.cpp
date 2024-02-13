#include "Permit.h"

Permit::Permit(std::string serial, PermitType type, int duration, float charge)
    :_serial_number(serial), _permit_type(type), _permit_duration_left(duration), _permit_renewal_charge(charge)
{
}

std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    os << "_serial_number: " << rhs._serial_number
       << " _permit_type: " << static_cast<int> (rhs._permit_type)
       << " _permit_duration_left: " << rhs._permit_duration_left
       << " _permit_renewal_charge: " << rhs._permit_renewal_charge;
    return os;
}
