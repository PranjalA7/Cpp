#include "DataModeller.h"

DataModeller::DataModeller(VType v, const std::vector<float>& prices)
    : _goodsPrices(prices), _instance(std::move(v))
{
}

void DataModeller::operator()()
{
    if(_goodsPrices.empty()){
        throw std::runtime_error("Not Found");
    }
    float total = 0.0f;

    for(float val : _goodsPrices){
        total += val;
    }

    std::cout << "Average value is: " << total / _goodsPrices.size() << "\n";

}

std::ostream &operator<<(std::ostream &os, const DataModeller &rhs) {
    os << "_instance: ";
    std::visit(
        [&](auto &&val){
            os << *val;
        },
    rhs._instance
    );
       
    os<< " _goodsPrices: ";
    for(float val:rhs._goodsPrices){
        os<<val<<"\t";
    }
    
    return os;
}