#include "Passenger.h"

Passenger::Passenger(Variant id, std::string name, int age, TicketPointer ticket, float fare)
    :_id(id), _name(name), _age(age), _ticket(ticket), _fare(fare)
{
}
std::ostream &operator<<(std::ostream &os, const Passenger &rhs) {
    os 
       << " _name: " << rhs._name
       << " _age: " << rhs._age
       << " _ticket: " << *rhs._ticket
       << " _fare: " << rhs._fare;
    return os;
}
