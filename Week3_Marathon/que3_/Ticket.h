#ifndef TICKET_H
#define TICKET_H

#include "TicketType.h"
#include <ostream>

class Ticket
{
private:
    float _tax;
    TicketType _type;
public:
    Ticket() = default;
    Ticket(const Ticket&) = delete;
    Ticket& operator=(const Ticket&) = delete;
    Ticket(Ticket&&) = delete;
    Ticket& operator=(Ticket&&) = delete;
    ~Ticket() = default;

    Ticket(float tax, TicketType type);

    float tax() const { return _tax; }
    void setTax(float tax) { _tax = tax; }

    TicketType type() const { return _type; }
    void setType(const TicketType &type) { _type = type; }

    friend std::ostream &operator<<(std::ostream &os, const Ticket &rhs);

    
};

#endif // TICKET_H
