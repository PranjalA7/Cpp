#include "Functionalities.h"

int main(){
    Container data;
    OwnerContainer Odata;

    CreateObjects(data, Odata);
    std::cout << "Owner of given ID:\n";
    OwnerOfGivenID(data, 102);
    std::cout << "Permit of given ID:\n";
    PermitOfGivenID(data, 101);
}