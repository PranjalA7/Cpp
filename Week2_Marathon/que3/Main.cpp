#include "Functionalities.h"

int main(){

    DriverContainer Ddata;
    LicenseContainer Ldata;
    CreateObjects(Ddata, Ldata);
    std::cout << *Ddata[0];
}