#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Product>(
            "p101",
            Product_Type::FOOD,
            100.0f,
            "Nestle",
            Product_Origin::DOMESTIC
        )
    );
    data.emplace_back(
        std::make_shared<Product>(
            "p102",
            Product_Type::FOOD,
            130.0f,
            "Nestle",
            Product_Origin::DOMESTIC
        )
    );
    data.emplace_back(
        std::make_shared<Product>(
            "p103",
            Product_Type::APPLIANCE,
            100.0f,
            "Tata",
            Product_Origin::IMPORTED
        )
    );
    data.emplace_back(
        std::make_shared<Product>(
            "p104",
            Product_Type::FOOD,
            200.0f,
            "Parle",
            Product_Origin::IMPORTED
        )
    );
    data.emplace_back(
        std::make_shared<Product>(
            "p105",
            Product_Type::PERFUME,
            300.0f,
            "Fogg",
            Product_Origin::DOMESTIC
        )
    );
}

void DisplayContainer(const Container &data)
{
    for (auto itr = data.begin(); itr != data.end() ; itr++)
    {
        std::cout << **itr << "\n";
    }
}

void DisplayAddresses(const Container &data)
{
    for (auto itr = data.begin(); itr != data.end() ; itr++)
    {
        std::cout << *itr << "\n";
    }
}
