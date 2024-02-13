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
            51,
            CustomerType::ELITE,
            std::make_shared<DebitCard>(102, "Pranjal Aher", "17/28", DebitCardType::INTERNATIONAL)
        )
    );
}

float AverageAge(Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    float total = 0.0f;

    //for each loop (range-based for loop)
    //for every "pointer" called "ptr" present in data, 
    //do the following steps

    for( Pointer& ptr : data){
        //smart pointer used as a regular pointer 
        total = total + ptr->age();
    }

    return total/data.size();
}

Pointer NthCustomer(Container &data, int N)
{
    if (data.empty()){
        throw std::runtime_error("data is empty");
    }
    if (N>data.size() || N<1){
        throw std::runtime_error("N is beyond available items");
    }
    
    //return data[N-1];

    auto itr = data.begin();

    while (N>1)
    {
        itr++;
        N--;
    }
    
    return *itr;
    
}

int AgeOfGivenCustomer(Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    
    for (Pointer& ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->age();
        }
    }

    throw std::runtime_error("ID NOT FOUND");    
}

int CvvOfGivenCustomer(Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    for (Pointer& ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->card()->cvv();
        }
    }
    throw std::runtime_error("ID NOT FOUND");
}

std::string ExpiryDateOfDebitCard(Container &data, int cvv)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    for (Pointer& ptr : data)
    {
        if (ptr->card()->cvv() == cvv)
        {
            return ptr->card()->expiry();
        }
    }
    throw std::runtime_error("CVV NOT FOUND");
}

std::shared_ptr<DebitCard> DebitCardPointerOfGivenID(Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }

    for (Pointer& ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->card();
        }
    }

    throw std::runtime_error("ID NOT FOUND");
}

// Container* ContainerOfPointers(Container &data, int age)
// {
//     if (data.empty())
//     {
//         throw std::runtime_error("Data is empty");
//     }

//     Container *dest;

//     for (Pointer& ptr : data)
//     {
//         if (ptr->age() > age )
//         {
//             (*dest).emplace_back(ptr);
//         }
//     }

//     return dest;
// }

Container CustomerAbove50(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    Container result;
    for (const Pointer& ptr : data)
    {
        if (ptr->age() > 50)
        {
            result.emplace_back(ptr);
        }
    }
    if (result.empty())
    {
        throw std::runtime_error("No customer above 50 age");
    }

    return result;
    
}
