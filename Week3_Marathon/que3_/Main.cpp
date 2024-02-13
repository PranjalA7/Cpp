#include "Functionalities.h"

int main(){
    Container data;

    CreatObjects(data);

    //std::cout << *data[0] << "\n";

    DisplayDetailsOfPassengerByID(data, "102");
    DisplayDetailsOfPassengerByFare(data, 3000.0f);
}