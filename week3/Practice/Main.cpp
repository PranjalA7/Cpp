#include "Functionalities.h"

int main(){
    Container data;
    CreateObjects(data);
    
    std::optional<std::list<VType>> ans = InstancesMatchingType(data, VehicleType::SEDAN);

    if (ans.has_value()){
        std::cout << ans.value().size() << "\n";
    }
    else{
        std::cout << "Vector returned no values" << "\n";
    }

}