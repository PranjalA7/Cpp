#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include "Employee.h"

using EmpPointer = std::shared_ptr<Employee>;
using ListContainer = std::list<EmpPointer>;
using VectorContainer = std::vector<EmpPointer>;

void CreateObjects(ListContainer& l1, VectorContainer& v1){

    l1.emplace_back(
        std::make_shared<Employee>(101)
    );
    l1.emplace_back(
        std::make_shared<Employee>(102)
    );
    l1.emplace_back(
        std::make_shared<Employee>(103)
    );

    v1.emplace_back(
        std::make_shared<Employee>(201)
    );
    v1.emplace_back(
        std::make_shared<Employee>(202)
    );
    v1.emplace_back(
        std::make_shared<Employee>(203)
    );
}

int main(){
    ListContainer l1;
    VectorContainer v1;
    CreateObjects(l1, v1);
    return 0;
}


/*
    Types of common logic building oprations

    1) Total of intergers

    2) Find min value feom a collection

    3) Find an attribute associated with the min value object

        int FindIdMinMileage(Conatainer& data) {
            float min_mileage = 
            int id = 
            for(VehicleObj v : data){
                float current_mileage = v->mileage();
                if(current_mileage < min_mileagge){
                    min_mileage = current_mileage;
                    minid = v->id();
                }
            }
            return minid
        }




*/
