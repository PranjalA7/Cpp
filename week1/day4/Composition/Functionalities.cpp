#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Customer>(
            111,
            "Harshit",
            27,
            CustomerType::REGULAR,
            std::make_shared<DebitCard>(101, "Harshit Shukla", "11/31", DebitCardType::DOMESTIC)
        )
    );

    data.emplace_back(
        std::make_shared<Customer>(
            112,
            "Pranjal",
            23,
            CustomerType::ELITE,
            std::make_shared<DebitCard>(102, "Pranjal Aher", "17/28", DebitCardType::INTERNATIONAL)
        )
    );
}