#ifndef PERMIT_H
#define PERMIT_H

#include "PermitType.h"
#include <ostream>

class Permit
{
private:
    std::string _serial_number {"V101"};
    PermitType _permit_type {PermitType::LEASE};
    int _permit_duration_left {1};
    float _permit_renewal_charge {0.0f};

public:
    Permit() = default;
    Permit(const Permit&) = delete;
    Permit& operator=(const Permit&) = delete;
    Permit(Permit&&) = delete;
    Permit& operator=(Permit&&) = delete;
    ~Permit() = default;

    Permit(std::string serial, PermitType type, int duration, float charge);

    std::string serialNumber() const { return _serial_number; }
    void setSerialNumber(const std::string &serial_number) { _serial_number = serial_number; }

    PermitType permitType() const { return _permit_type; }
    void setPermitType(const PermitType &permit_type) { _permit_type = permit_type; }

    int permitDurationLeft() const { return _permit_duration_left; }
    void setPermitDurationLeft(int permit_duration_left) { _permit_duration_left = permit_duration_left; }

    float permitRenewalCharge() const { return _permit_renewal_charge; }
    void setPermitRenewalCharge(float permit_renewal_charge) { _permit_renewal_charge = permit_renewal_charge; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};

#endif // PERMIT_H
