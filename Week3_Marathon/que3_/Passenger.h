#ifndef PASSENGER_H
#define PASSENGER_H

#include "Ticket.h"
#include <variant>
#include <memory>
#include <ostream>

using Variant = std::variant<int, std::string>;
using TicketPointer = std::shared_ptr<Ticket>;

class Passenger
{
private:
    Variant _id;
    std::string _name;
    int _age;
    TicketPointer _ticket;
    float _fare;

public:
    Passenger() = default;
    Passenger(const Passenger&) = delete;
    Passenger& operator=(const Passenger&) = delete;
    Passenger(Passenger&&) = delete;
    Passenger& operator=(Passenger&&) = delete;
    ~Passenger() = default;

    Passenger(Variant id, std::string name, int age, TicketPointer ticket, float fare);

    Variant id() const { return _id; }

    std::string name() const { return _name; }

    int age() const { return _age; }

    TicketPointer ticket() const { return _ticket; }

    float fare() const { return _fare; }

    friend std::ostream &operator<<(std::ostream &os, const Passenger &rhs);

    
};

#endif // PASSENGER_H
