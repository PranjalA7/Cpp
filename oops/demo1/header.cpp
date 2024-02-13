#include "header.h"

void Address::accept()
{
}

void Address::display()
{
    std::cout<<"City: "<<city;
}

Address::~Address()
{
    std::cout<<"\n~Address() called";
}
