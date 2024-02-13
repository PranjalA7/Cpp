#include "Functionalities.h"
#include "Vehicle.h"
int main() {
    const int size = 3;
    Vehicle* arr[3] = {nullptr};
    
    
    CreateObjects(arr, size);
    arr[2]->display();
    float ans = AveragePrice(arr, size);
    int id = LowestPriceId(arr, size);
    std::cout<<ans<<"\n";
    std::cout<<id<<"\n";
    
}