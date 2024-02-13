#ifndef TOURISTPERMIT_H
#define TOURISTPERMIT_H

#include<iostream>

class TouristPermit
{
private:
    int _duratiom_months;
    std::string _permit_issuer_state;
    float _permit_cost;

public:
    TouristPermit() = default;
    TouristPermit(const TouristPermit&) = delete;
    TouristPermit& operator=(const TouristPermit&) = delete;
    TouristPermit(TouristPermit&&) = delete;
    TouristPermit& operator=(TouristPermit&&) = delete;
    ~TouristPermit() = default;

    TouristPermit(int mon, std::string state, float cost);

    int duratiomMonths() const { return _duratiom_months; }
    void setDuratiomMonths(int duratiom_months) { _duratiom_months = duratiom_months; }

    std::string permitIssuerState() const { return _permit_issuer_state; }
    void setPermitIssuerState(const std::string &permit_issuer_state) { _permit_issuer_state = permit_issuer_state; }

    float permitCost() const { return _permit_cost; }
    void setPermitCost(float permit_cost) { _permit_cost = permit_cost; }

    friend std::ostream &operator<<(std::ostream &os, const TouristPermit &rhs);
};

#endif // TOURISTPERMIT_H
