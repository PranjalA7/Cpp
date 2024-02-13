#include "CashPaymentCabBooking.h"

float CashPaymentCabBooking::CabFareCalculation()
{
    if (_reward_points_claimed < 0.25*this->basicFare())
    {
        return 2.0f*this->basicFare();
    }
    
    return 1.5f*this->basicFare();
}

CashPaymentCabBooking::CashPaymentCabBooking(std::string id, std::string ploc, std::string dloc, float fare, int points)
    : CabBooking(id, ploc, dloc, fare), _reward_points_claimed(points)
{
}

int CashPaymentCabBooking::rewardPointsClaimed()
{
    return _reward_points_claimed;
}

std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _reward_points_claimed: " << rhs._reward_points_claimed;
    return os;
}

