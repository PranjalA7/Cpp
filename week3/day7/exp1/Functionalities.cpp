#include "Functionalities.h"

#include <mutex>
std::mutex mt;

void CreateObjects(Container& data)
{
    data.emplace_back(
        std::make_unique<DataModeller>(
        //instance
        std::make_unique<Employee>(
            "Harshit", 
            EmployeeType::REGULAR, 
            780000.0f),

        //vector of floats
        std::vector<float> {19.21f, 145.31f, 204.5f}
        )
    );

    data.emplace_back(
        std::make_unique<DataModeller>(
        //instance
        std::make_unique<BusinessOwner>(
            100000.0f,
            200000.0f,
            "XYZ corp",
            BusinessType::MNC
            ),

        //vector of floats
        std::vector<float> {19.21f, 145.31f, 204.5f}
        )
    );

}

/*
    this function will accept a container of datamodeller

    FOR EACH POINTER, perform the following

    a) capture thr instance reference
    b) USe holds_alternative to verify which type of pointer in the _instance
    c) if pointer is of type bussinessOwner
        i) use std::get to fetch BusinessPointer (this will be safe because if has )
        ii) use tge fetched pointer in business
*/

void CalculateTaxPayable(const Container &data)
{
    for (const dataVariant& ptr : data){
        const VType& val = ptr->instance();

        if(std::holds_alternative<BusinessPointer>(val)){

            const BusinessPointer& p = std::get<BusinessPointer>(val);

            mt.lock();
            std::cout << 0.1f * (p->revenue() - p->expense());
            mt.unlock();

        }
            else { 
                const EmpPointer& p = std::get<EmpPointer>(val);
                if (p->type() == EmployeeType::REGULAR)
                {
                    std::lock_guard<std::mutex> lk(mt);
                    std::cout << "Tax is 10% " << 0.1f * p->salary() << "\n";
                }
                else{
                    std::lock_guard<std::mutex> lk(mt);
                    std::cout << "Tax is 20% " << 0.2f * p->salary() << "\n";
                }
                
            }
    }
}

void CallParenOperator(const Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }
    else{
        for(const dataVariant& ptr : data){
            std::lock_guard<std::mutex> lk(mt);
            ptr->operator()();
        }
    }
}
