#include"Car.h"
#include<vector>
#include "functionalities.h"

int main(){
    Container data;
    createObjects(data);
    //std::cout<<*data[0];
    std::cout<<"Function to find carID and return the engineHorsepower"<<"\n";
    std::cout<<EngineHorsepowerByCarID(data, "Car1")<<"\n";
    
    // std::cout<<"\nCar whose engineTorque is over 80"<<"\n";
    // Container ans = CarEngineTorqueOver80(data);
    // for(const Pointer& ptr : ans){ 
    //     std::cout<<*ptr<<"\n";  
    // }

    std::cout<<"\nCars whose carType match with provided type"<<"\n";
    Container ans2 = CarsWithSameCarType(data, Car_Type::SEDAN);
    for(const Pointer& ptr : ans2){ 
        std::cout<<*ptr<<"\n";  
    }

    // std::cout<<"\nFunction to find the average engineHorsepower of all Car satisfying conditions"<<"\n";
    // std::cout<<AverageHorsepower(data)<<"\n";

    // std::cout<<"\nCarId with lowest price"<<"\n";
    // std::cout<<CarIDWithLowestPrice(data)<<"\n";
    
    // std::cout<<"\nCar combined prices"<<"\n";
    // std::cout<<CombinedCarPrice(data[0], data[2])<<"\n"; 
    return 0;
}