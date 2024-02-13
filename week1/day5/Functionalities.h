#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<memory>
#include<iostream>
#include"Customer.h"

using Pointer =  std::shared_ptr<Customer>;
using Container = std::vector<Pointer>;

void CreateObjects(Container &data);

/*
    function to find average age
*/
float AverageAge(Container& data);
/*
    function to return the nth object from the container
*/
Pointer NthCustomer(Container& data, int N);
/*
    function to find the age of the customer whose id is provided as a parameter
*/
int AgeOfGivenCustomer(Container& data, int id);

/*
    function to find the cvv number of debit for customer whose
    ID is provided as a parameter
*/
int CvvOfGivenCustomer(Container& data, int id);

/*
    function to return the expiry date of debit card whose cvv value
    matches with value given by the user
*/
std::string ExpiryDateOfDebitCard(Container& data, int cvv);

/*
    function to return a container of all "Pointer"s which point to 
    customer with age above 50
*/
// Container* ContainerOfPointers(Container& data, int age);

Container CustomerAbove50(const Container& data);
/*
    function to return the debit card pointer for a customer whose ID
    is given as input parameter
*/
std::shared_ptr<DebitCard> DebitCardPointerOfGivenID(Container& data, int id);

#endif // FUNCTIONALITIES_H
