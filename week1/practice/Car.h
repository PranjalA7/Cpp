#ifndef CAR_H
#define CAR_H

#include "carType.h"
#include "Engine.h"
#include <memory>
#include <ostream>

class Car
{
private:
    std::string carId {""};
    std::string carBrand {""};
    Car_Type carType {Car_Type::SEDAN};
    std::shared_ptr<Engine> carEngine;    
    float carPrice {0.0f};

public:
    Car() = default;
    Car(const Car&) = delete;
    Car& operator=(const Car&) = delete;
    Car(Car&&) = delete;
    Car& operator=(Car&&) = delete;
    ~Car() = default;

    Car(std::string id, std::string brand, Car_Type type, std::shared_ptr<Engine> cengine, float price);

    std::string getCarId() const { return carId; }
    void setCarId(int carId_) { carId = carId_; }

    std::string getCarBrand() const { return carBrand; }
    void setCarBrand(const std::string &carBrand_) { carBrand = carBrand_; }

    Car_Type getCarType() const { return carType; }
    void setCarType(const Car_Type &carType_) { carType = carType_; }

    std::shared_ptr<Engine> getCarEngine() const { return carEngine; }
    void setCarEngine(const std::shared_ptr<Engine> &carEngine_) { carEngine = carEngine_; }

    float getCarPrice() const { return carPrice; }
    void setCarPrice(float carPrice_) { carPrice = carPrice_; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_H
