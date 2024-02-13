#ifndef ONLINEPAYMENTCABBOOKING_H
#define ONLINEPAYMENTCABBOOKING_H

#include "PaymentMode.h"
#include "CabBooking.h"
#include <ostream>

class OnlinePaymentCabBooking : public CabBooking
{
private:
    PaymentMode _payment_mode {PaymentMode::CARD};
    int _drop_stop_count {1};

public:
    OnlinePaymentCabBooking() = default;
    OnlinePaymentCabBooking(const OnlinePaymentCabBooking&) = delete;
    OnlinePaymentCabBooking& operator=(const OnlinePaymentCabBooking&) = delete;
    OnlinePaymentCabBooking(OnlinePaymentCabBooking&&) = delete;
    OnlinePaymentCabBooking& operator=(OnlinePaymentCabBooking&&) = delete;
    ~OnlinePaymentCabBooking() = default;

    float CabFareCalculation() override;
    int rewardPointsClaimed() override;

    OnlinePaymentCabBooking(std::string id, std::string ploc, std::string dloc, float fare, PaymentMode mode, int count);

    PaymentMode paymentMode() const { return _payment_mode; }
    void setPaymentMode(const PaymentMode &payment_mode) { _payment_mode = payment_mode; }

    int dropStopCount() const { return _drop_stop_count; }
    void setDropStopCount(int drop_stop_count) { _drop_stop_count = drop_stop_count; }

    friend std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs);
};

#endif // ONLINEPAYMENTCABBOOKING_H
