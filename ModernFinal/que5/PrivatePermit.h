#ifndef PRIVATEPERMIT_H
#define PRIVATEPERMIT_H

#include "PrivateType.h"
#include <iostream>

class PrivatePermit
{
private:
    std::string _permit_issuer_state;
    float _permit_tax;
    float _permit_renewal_charge;
    PrivateType _private_permit_type;
public:
    PrivatePermit() = default;
    PrivatePermit(const PrivatePermit&) = delete;
    PrivatePermit& operator=(const PrivatePermit&) = delete;
    PrivatePermit(PrivatePermit&&) = delete;
    PrivatePermit& operator=(PrivatePermit&&) = delete;
    ~PrivatePermit() = default;

    PrivatePermit(std::string state, float tax, float charge, PrivateType type);

    std::string permitIssuerState() const { return _permit_issuer_state; }
    void setPermitIssuerState(const std::string &permit_issuer_state) { _permit_issuer_state = permit_issuer_state; }

    float permitTax() const { return _permit_tax; }
    void setPermitTax(float permit_tax) { _permit_tax = permit_tax; }

    float permitRenewalCharge() const { return _permit_renewal_charge; }
    void setPermitRenewalCharge(float permit_renewal_charge) { _permit_renewal_charge = permit_renewal_charge; }

    PrivateType privatePermitType() const { return _private_permit_type; }
    void setPrivatePermitType(const PrivateType &private_permit_type) { _private_permit_type = private_permit_type; }

    friend std::ostream &operator<<(std::ostream &os, const PrivatePermit &rhs);
};


#endif // PRIVATEPERMIT_H
