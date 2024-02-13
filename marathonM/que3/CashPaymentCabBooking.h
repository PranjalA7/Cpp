#ifndef CASHPAYMENTCABBOOKING_H
#define CASHPAYMENTCABBOOKING_H

#include "CabBooking.h"
#include <ostream>

class CashPaymentCabBooking : public CabBooking
{
private:
    int _reward_points_claimed {1};

public:
    CashPaymentCabBooking() = default;
    CashPaymentCabBooking(const CashPaymentCabBooking&) = delete;
    CashPaymentCabBooking& operator=(const CashPaymentCabBooking&) = delete;
    CashPaymentCabBooking(CashPaymentCabBooking&&) = delete;
    CashPaymentCabBooking& operator=(CashPaymentCabBooking&&) = delete;
    ~CashPaymentCabBooking() = default;

    float CabFareCalculation() override;
    CashPaymentCabBooking(std::string id, std::string ploc, std::string dloc, float fare, int points);

    int rewardPointsClaimed() override;

    void setRewardPointsClaimed(int reward_points_claimed) { _reward_points_claimed = reward_points_claimed; }


    friend std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs);
};

#endif // CASHPAYMENTCABBOOKING_H
