#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string num, VehicleType vtype, int seat, std::shared_ptr<Permit> per)
    :_number(num), _type(vtype), _seat_count(seat), _permit(per)
{
}

std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << static_cast<int> (rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _permit: " << *rhs._permit;
    return os;
}
