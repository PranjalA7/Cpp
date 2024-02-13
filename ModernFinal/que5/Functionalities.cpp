#include "Functionalities.h"

void CreateObjects(Container &data, OwnerContainer &Odata)
{
    Odata[0] = (std::make_shared<Owner>("Harshit", "Mumbai", OwnerType::FULL_OWNER));
    data[0] = (
        std::make_shared<Vehicle>(101, 7000.0f,
        Odata[0],
        std::make_shared<PrivatePermit>("MH", 100.0f, 50.0f, PrivateType::LMV)
        )
    );
    Odata[1] = (std::make_shared<Owner>("Pranjal", "Pune", OwnerType::FULL_OWNER));
    data[1] = (
        std::make_shared<Vehicle>(102, 6000.0f,
        Odata[1],
        std::make_shared<TouristPermit>(10, "MH", 1000.0f)
        )
    );
    // Odata[2] = (std::make_shared<Owner>("Sid", "Nashik", OwnerType::PART_OWNER));
    // data[2] = (
    //     std::make_shared<Vehicle>(103, 5000.0f,
    //     Odata[2],
    //     std::make_shared<TouristPermit>(20, "MH", 700.0f)
    //     )
    // );

}

void PermitOfGivenID(const Container& data, int id){
    if (data.empty())
    {
        throw std::runtime_error("data is empty");
    }
    
    for(const VehPointer& ptr : data){
        if (ptr->id() == id)
        {
            std::visit([&](auto&& val){
                std::cout << *val << "\n";
            }, ptr->permit());
        }
        
    }
}

void OwnerOfGivenID(const Container& data, int id){
    if (data.empty())
    {
        throw std::runtime_error("data is empty");
    }

    for(const VehPointer& ptr : data){
        if (ptr->id() == id)
        {
            std::cout << *(ptr->owner().get())<< "\n";
        }
        
    }
}