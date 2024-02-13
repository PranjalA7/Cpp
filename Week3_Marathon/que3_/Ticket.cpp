#include "Ticket.h"

Ticket::Ticket(float tax, TicketType type)
    :_tax(tax), _type(type)
{
}

std::ostream &operator<<(std::ostream &os, const Ticket &rhs) {
    os << "_tax: " << rhs._tax
       << " _type: " << static_cast<int> (rhs._type);
    return os;
}
