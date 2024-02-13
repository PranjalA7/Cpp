#include "CabBooking.h"

std::ostream &operator<<(std::ostream &os, const CabBooking &rhs) {
    os << "_booking_id: " << rhs._booking_id
       << " _pickup_location: " << rhs._pickup_location
       << " _drop_location: " << rhs._drop_location
       << " _basic_fare: " << rhs._basic_fare;
    return os;
}

CabBooking::CabBooking(std::string id, std::string ploc, std::string dloc, float fare)
    :_booking_id(id), _pickup_location(ploc), _drop_location(dloc), _basic_fare(fare)
{
}
