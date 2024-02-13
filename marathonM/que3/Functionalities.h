#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "CashPaymentCabBooking.h"
#include "OnlinePaymentCabBooking.h"
#include "CabBooking.h"
#include<memory>
#include<list>


using Pointer =  std::shared_ptr<CabBooking>;
using Container = std::list<Pointer>;
using FareCont = std::list<float>;

void CreateObjects(Container& data);

FareCont BaseFareWithSamePickUpLocation(const Container& data, std::string loc);

std::string BookingIDWithHighestFare(const Container& data);

Container LastNInstancesOfContainer(const Container& data, int lastN);

bool CashBookingFareCalculationsAboveThreshold(const Container& data);

float AverageOfOnlineBaseFare(Container &data);

bool IfAllCashAbove1000(Container &data);

void Display(const Container &data);

#endif // FUNCTIONALITIES_H
