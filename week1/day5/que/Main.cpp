#include"Car.h"
#include<vector>
#include"Functionalities.h"

int main(){
    Container data;
    CreateObjects(data);
    //std::cout<<*data[0];
    std::cout<<"Function to find carID and return the engineHorsepower"<<"\n";
    std::cout<<engineHorsepowerByCarID(data, "Car1")<<"\n";
    
    std::cout<<"\nCar whose engineTorque is over 80"<<"\n";
    Container ans = CarEngineTorqueAbove80(data);
    for(const Pointer& ptr : ans){ 
        std::cout<<*ptr<<"\n";  
    }

    std::cout<<"\nCars whose carType match with provided type"<<"\n";
    Container ans2 = CarEngineWithSameCarType(data, CarType::SEDAN);
    for(const Pointer& ptr : ans2){ 
        std::cout<<*ptr<<"\n";  
    }

    std::cout<<"\nFunction to find the average engineHorsepower of all Car satisfying conditions"<<"\n";
    std::cout<<AverageEngineHorsePower(data)<<"\n";

    std::cout<<"\nCarId with lowest price"<<"\n";
    std::cout<<CarIDWithLowestPrice(data)<<"\n";
    
    std::cout<<"\nCar combined prices"<<"\n";
    std::cout<<CarCombinedPrice(data[0], data[2])<<"\n"; 
    return 0;
}