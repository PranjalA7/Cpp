#include "License.h"

License::License(std::string number, int validity, License_Category catg, std::string RTO, std::string state)
    :licenseNumber(number), licenseValidityYears(validity), lincenseCategory(catg), licenseIssuingRTO(RTO), licenseIssuingState(state)
{
    if (validity > 15 || validity < 0)
    {
        throw std::runtime_error("Validity is out of range");
    }
}
std::ostream &operator<<(std::ostream &os, const License &rhs) {
    os << "licenseNumber: " << rhs.licenseNumber
       << " licenseValidityYears: " << rhs.licenseValidityYears
       << " lincenseCategory: " << static_cast<int> (rhs.lincenseCategory)
       << " licenseIssuingRTO: " << rhs.licenseIssuingRTO
       << " licenseIssuingState: " << rhs.licenseIssuingState;
    return os;
}
