#include <iostream>
#include "ApiCaller.h"
#include <memory>


int main() {
    std::string _end_point = "https://min-api.cryptocompare.com/data/price?fsym=BTC&tsyms=USD,JPY,EUR";
    auto _api_ptr = std::make_shared<ApiCaller> (_end_point);

    _api_ptr->ExecuteApiCall();
    std::cout << *_api_ptr << "\n";

}