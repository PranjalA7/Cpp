#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include "VehicleType.h"
#include "Permit.h"
#include <memory>
#include <ostream>

class TouristVehicle
{
private:
    std::string _number {"MH00PR000"};
    VehicleType _type {VehicleType::CAB};
    int _seat_count {1};
    std::shared_ptr<Permit> _permit;
    

public:
    TouristVehicle() = default;
    TouristVehicle(const TouristVehicle&) = delete;
    TouristVehicle& operator=(const TouristVehicle&) = delete;
    TouristVehicle(TouristVehicle&&) = delete;
    TouristVehicle& operator=(TouristVehicle&&) = delete;
    ~TouristVehicle() = default;

    TouristVehicle(std::string num, VehicleType vtype, int seat, std::shared_ptr<Permit> per);

    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    VehicleType type() const { return _type; }
    void setType(const VehicleType &type) { _type = type; }

    int seatCount() const { return _seat_count; }
    void setSeatCount(int seat_count) { _seat_count = seat_count; }

    std::shared_ptr<Permit> permit() const { return _permit; }
    void setPermit(const std::shared_ptr<Permit> &permit) { _permit = permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

#endif // TOURISTVEHICLE_H
