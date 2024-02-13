#include "Car.h"

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "carId: " << rhs.carId
       << " carBrand: " << rhs.carBrand
       << " carType: " << static_cast<int> (rhs.carType)
       << " carEngine: " << rhs.carEngine
       << " carPrice: " << rhs.carPrice;
    return os;
}

Car::Car(std::string id, std::string brand, Car_Type type, std::shared_ptr<Engine> cengine, float price)
    :carId(id), carBrand(brand), carType(type), carEngine(cengine), carPrice(price)
{
}
