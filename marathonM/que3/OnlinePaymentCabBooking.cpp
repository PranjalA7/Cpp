#include "OnlinePaymentCabBooking.h"

float OnlinePaymentCabBooking::CabFareCalculation()
{
    if (_payment_mode == PaymentMode::CARD || _payment_mode == PaymentMode::UPI)
    {
        return (float)_drop_stop_count * this->basicFare();
    }

    return 0.10f * this->basicFare() + this->basicFare();
}

int OnlinePaymentCabBooking::rewardPointsClaimed()
{
    return 0;
}

OnlinePaymentCabBooking::OnlinePaymentCabBooking(std::string id, std::string ploc, std::string dloc, float fare, PaymentMode mode, int count)
    : CabBooking(id, ploc, dloc, fare), _payment_mode(mode), _drop_stop_count(count)
{
}

std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _payment_mode: " << static_cast<int> (rhs._payment_mode)
       << " _drop_stop_count: " << rhs._drop_stop_count;
    return os;
}
