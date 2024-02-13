#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"
/*
    accept a pointer to an array of pointers.
    Initialize objects on heap. store their addresses in the array
*/

void CreateObjects(Vehicle** arr, const int size);

/*
    Loop over instances
    Calculate total price and divide it by number of instances
*/
float AveragePrice(Vehicle** arr, const int size);

/*
    Return _id of variable with lowest price
*/
int LowestPriceId(Vehicle** arr, const int size);

#endif // FUNCTIONALITIES_H
