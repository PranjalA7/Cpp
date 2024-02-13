#include "Functionalities.h"

int main(){

    //Creating Six Objects 
    Container data;
    CreateObjects(data);

    try{
        std::cout << "Function1" << "\n";
        FareCont ans1 = BaseFareWithSamePickUpLocation(data, "Pune");
        for (auto itr = data.begin(); itr != data.end(); itr++)
        {
            std::cout << **itr << "\n";
        }
        std::cout<< "\n"; 
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function2" << "\n";
        std::cout << BookingIDWithHighestFare(data) << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }  
    
    try{
        std::cout << "Function3" << "\n";
        Container ans2 = LastNInstancesOfContainer(data, 2);
        Display(ans2);
     
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        std::cout << "Function4" << "\n";
        std::cout << CashBookingFareCalculationsAboveThreshold(data) << "\n";
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    std::cout<< AverageOfOnlineBaseFare(data) << "\n";
    std::cout << IfAllCashAbove1000(data) << "\n";
}
