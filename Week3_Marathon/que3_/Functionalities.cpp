#include "Functionalities.h"

void CreatObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Passenger>(
            101,
            "Pranjal", 27, 
            std::make_shared<Ticket>(10.0f, TicketType::RESERVED),
            1000.0f
        )
    );
    data.emplace_back(
        std::make_shared<Passenger>(
            "102",
            "Harshit", 27, 
            std::make_shared<Ticket>(20.0f, TicketType::GENERAL),
            2000.0f
        )
    );
    data.emplace_back(
        std::make_shared<Passenger>(
            103,
            "Sid", 27, 
            std::make_shared<Ticket>(30.0f, TicketType::RESERVED),
            3000.0f
        )
    );
}

void DisplayDetailsOfPassengerByID(const Container& data, Variant id){
    for(const PassPointer& ptr : data){
        Variant v = ptr->id();
        
        std::visit([&](auto &&val){
            if (v == id)
            {
                std::cout << *ptr << "\n";
            }
        },
        v
        );
    }
}

void DisplayDetailsOfPassengerByFare(const Container& data, float fare){
    for(const PassPointer& ptr : data){
        if (ptr->fare() == fare)
        {
            std::cout << *ptr << "\n";
        }
        
    }
}
