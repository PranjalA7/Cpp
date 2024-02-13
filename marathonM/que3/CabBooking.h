#ifndef CABBOOKING_H
#define CABBOOKING_H

#include <iostream>

class CabBooking
{
private:
    std::string _booking_id {""};
    std::string _pickup_location {""};
    std::string _drop_location {""};
    float _basic_fare {0.0f};    

public:
    CabBooking() = default;
    CabBooking(const CabBooking&) = delete;
    CabBooking& operator=(const CabBooking&) = delete;
    CabBooking(CabBooking&&) = delete;
    CabBooking& operator=(CabBooking&&) = delete;
    ~CabBooking() = default;

    virtual float CabFareCalculation() = 0;
    virtual int rewardPointsClaimed(){return 0;}
    

    CabBooking(std::string id, std::string ploc, std::string dloc, float fare);

    std::string bookingId() const { return _booking_id; }
    void setBookingId(const std::string &booking_id) { _booking_id = booking_id; }

    std::string pickupLocation() const { return _pickup_location; }
    void setPickupLocation(const std::string &pickup_location) { _pickup_location = pickup_location; }

    std::string dropLocation() const { return _drop_location; }
    void setDropLocation(const std::string &drop_location) { _drop_location = drop_location; }

    float basicFare() const { return _basic_fare; }
    void setBasicFare(float basic_fare) { _basic_fare = basic_fare; }

    friend std::ostream &operator<<(std::ostream &os, const CabBooking &rhs);

};

#endif // CABBOOKING_H
