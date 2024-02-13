#ifndef LICENSE_H
#define LICENSE_H

#include "LicenseCategory.h"
#include <ostream>

class License
{
private:
    std::string licenseNumber;
    int licenseValidityYears;
    License_Category lincenseCategory;
    std::string licenseIssuingRTO;
    std::string licenseIssuingState;

public:
    License() = default;
    ~License() = default;

    License(std::string number, int validity, License_Category catg, std::string RTO, std::string state);

    std::string getLicenseNumber() const { return licenseNumber; }
    void setLicenseNumber(const std::string &licenseNumber_) { licenseNumber = licenseNumber_; }

    int getLicenseValidityYears() const { return licenseValidityYears; }
    void setLicenseValidityYears(int licenseValidityYears_) { licenseValidityYears = licenseValidityYears_; }

    License_Category getLincenseCategory() const { return lincenseCategory; }
    void setLincenseCategory(const License_Category &lincenseCategory_) { lincenseCategory = lincenseCategory_; }

    std::string getLicenseIssuingRTO() const { return licenseIssuingRTO; }
    void setLicenseIssuingRTO(const std::string &licenseIssuingRTO_) { licenseIssuingRTO = licenseIssuingRTO_; }

    std::string getLicenseIssuingState() const { return licenseIssuingState; }
    void setLicenseIssuingState(const std::string &licenseIssuingState_) { licenseIssuingState = licenseIssuingState_; }

    friend std::ostream &operator<<(std::ostream &os, const License &rhs);
};

#endif // LICENSE_H
