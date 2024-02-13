#include "Functionalities.h"

int main(){
    //Creating Five Objects 
    Container data;
    CreateObjects(data);

    std::cout << "Function1" << "\n";
    std::cout << IsReadingValueBelowThreshold(data) << "\n";
    std::cout << "Function2" << "\n";
    std::cout << CountOfSensorsOfGivenType(data, SensorType::TEMPERATURE) << "\n";
    std::cout << "Function3" << "\n";
    std::cout << NameOfSensorByIDnType(data, 105, SensorType::TEMPERATURE) << "\n";
    std::cout << "Function4" << "\n";
    

    try{
        std::cout << "Function4" << "\n";
        Container ans;
        ans = SensorsWhoSatisfyConditons(data);
        Display(ans);
        } 
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
    

    return 0;
}