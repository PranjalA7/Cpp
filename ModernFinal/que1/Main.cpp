#include "Functionalities.h"

int main(){

    Container data;
    CreateObjects(data);
    
    try
    {
        std::optional<TypeContainer> ans1 = EngineTypeMatchingCriteria(data);
        if (ans1.has_value()){
            std::cout << "Container of Engine types matching the criteria : \n";
            for(EngineType type : ans1.value()){
                std::cout << static_cast<int>(type) << " ";
            }
            std::cout << "\n";
        }
        else{
            std::cout << "Function returned no values" << "\n";
        }
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try{
        bool ans2 = CheckIfTorqueIsAbove110(data);
        if (ans2)
        {
            std::cout << "All instances dont have Torque above 110\n";
        }
        else
        {
            std::cout << "All instances have Torque above 110\n";
        }
        

    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }

    try
    {
        std::cout << "Count of Instances above threshold :" 
        << CountOfInstancesWithCapacityAboveThreshold(data, 1.0f) << "\n";
    
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
           
}