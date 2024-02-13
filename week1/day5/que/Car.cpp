#include "Car.h"
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "carid: " << rhs.carid
       << " carBrand: " << rhs.carBrand
       << " carType: " << static_cast<int> (rhs.carType)
       << " carEngine: " << *(rhs.carEngine)
       << " carPrice: " << rhs.carPrice;
    return os;
}
Car::Car(std::string id, std::string brand, CarType ctype, std::shared_ptr<Engine> cengine, float price)
    :carid(id), carBrand(brand), carType(ctype), carEngine(cengine), carPrice(price)
{
}
