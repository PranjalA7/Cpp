#ifndef CAR_H
#define CAR_H

#include"CarType.h"
#include"Engine.h"
#include <ostream>
#include<memory>

class Car
{
private:
    std::string carid{""};
    std::string carBrand{""};
    CarType carType{CarType::SEDAN};
    std::shared_ptr<Engine> carEngine;
    float carPrice{0.0f};

public:
    Car() = default;
    Car(Car&) = delete;
    Car& operator=(const Car&) = delete;
    Car(Car&&) = delete;
    Car& operator=(Car&&) = delete;
    ~Car() = default;

    Car(std::string id, std::string brand, CarType ctype, std::shared_ptr<Engine> cengine, float price);

    std::string getCarid() const { return carid; }
    void setCarid(const std::string &carid_) { carid = carid_; }

    std::string getCarBrand() const { return carBrand; }
    void setCarBrand(const std::string &carBrand_) { carBrand = carBrand_; }

    CarType getCarType() const { return carType; }
    void setCarType(const CarType &carType_) { carType = carType_; }

    std::shared_ptr<Engine> getCarEngine() const { return carEngine; }
    void setCarEngine(const std::shared_ptr<Engine> &carEngine_) { carEngine = carEngine_; }

    float getCarPrice() const { return carPrice; }
    void setCarPrice(float carPrice_) { carPrice = carPrice_; }

    

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_H
