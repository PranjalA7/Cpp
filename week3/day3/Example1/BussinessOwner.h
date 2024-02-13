#ifndef BUSSINESSOWNER_H
#define BUSSINESSOWNER_H

#include <iostream>

class BussinessOwner
{
private:
    
public:
    BussinessOwner() {}
    ~BussinessOwner() {}

    void PayTax() {
        std::cout << "Bussiness has to pay advance tax and GST every month" << "\n";
    }
};

#endif // BUSSINESSOWNER_H
