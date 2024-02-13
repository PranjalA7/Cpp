#include "PrivatePermit.h"

PrivatePermit::PrivatePermit(std::string state, float tax, float charge, PrivateType type)
    :_permit_issuer_state(state), _permit_tax(tax), _permit_renewal_charge(charge), _private_permit_type(type)
{
    if(_permit_renewal_charge < 0){
        throw std::runtime_error("Charge cant be negative");
    }
}
std::ostream &operator<<(std::ostream &os, const PrivatePermit &rhs) {
    os << "_permit_issuer_state: " << rhs._permit_issuer_state
       << " _permit_tax: " << rhs._permit_tax
       << " _permit_renewal_charge: " << rhs._permit_renewal_charge;
    return os;
}
