#include<iostream>  

#include"Vehicle.h"
#include"VehicleType.h"
#include<memory>

int main(){

    std::shared_ptr<Vehicle> ptr = std::make_shared<Vehicle>
    (101, "city", 10200.0f, VehicleType::PERSONAL);
    //destructor executes before the freeing memory
    return 0;
}
/*
    RAII Resource Acquisition Is Initialization
    1) When we acquire resource, something is initialized
    2) if I want to aquire resource then I must acquire it while 
    initializing "Something"
*/