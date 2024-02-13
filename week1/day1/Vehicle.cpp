#include "Vehicle.h"

Vehicle::Vehicle(int id, std::string model, float price, VehicleType type)
    :_id(id), _model_name(model), _price(price), _type(type) { }

float Vehicle::price()  { return _price; }
int Vehicle::id() { return _id; }
void Vehicle::display()
{
    std::cout<<_id;
    std::cout<<_model_name;
    std::cout<<_price;

}
