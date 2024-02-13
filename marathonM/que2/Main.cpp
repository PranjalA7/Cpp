#include "Functionalities.h"

int main(){

    //Creating Three Objects 
    Container data;
    CreateObjects(data);

    try{
        std::cout << "Function1" << "\n";
        Container ans1 = VehiclesWhoSatisfyConditions(data);
        Display(ans1);
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
    
    try{
        std::cout << "Function2" << "\n";
        std::cout << AveragePermitDurationLeftOfCAB(data) << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function3" << "\n";
        std::cout << static_cast<int> (VehicleWithMinBookingCharge(data)) << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function4" << "\n";
        Container ans2 = LastNInstancesOfContainer(data, 2);
        Display(ans2);
     
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
    return 0;
}