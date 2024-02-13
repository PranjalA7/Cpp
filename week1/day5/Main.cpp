#include<iostream>
#include"Functionalities.h"

int main(){

    Container data;
    CreateObjects(data);
    std::cout<<CvvOfGivenCustomer(data, 112)<<"\n";
    std::cout<<ExpiryDateOfDebitCard(data, 102)<<"\n";
    std::cout<<*(DebitCardPointerOfGivenID(data, 112))<<"\n";

    try{
        Container ans = CustomerAbove50(data);
        for(const Pointer& ptr : ans){
            std::cout<<*ptr<<"/n";
        } 
    }catch (const std::runtime_error& ex){
        std::cout << ex.what() << "\n";
    }
    

    return 0;
} 