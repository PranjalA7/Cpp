#include "TouristPermit.h"

TouristPermit::TouristPermit(int mon, std::string state, float cost)
    :_duratiom_months(mon), _permit_issuer_state(state), _permit_cost(cost)
{
    if (_duratiom_months < 0)
    {
        throw std::runtime_error("Months cant be in negative");
    }
    
}

std::ostream &operator<<(std::ostream &os, const TouristPermit &rhs) {
    os << "_duratiom_months: " << rhs._duratiom_months
       << " _permit_issuer_state: " << rhs._permit_issuer_state
       << " _permit_cost: " << rhs._permit_cost;
    return os;
}

