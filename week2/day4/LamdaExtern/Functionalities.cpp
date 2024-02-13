#include "Functionalities.h"
#include <numeric>

std::function< float(Container&)> AverageSalary = [](Container& data){
    
    float result = std::accumulate(
        data.begin(),
        data.end(),
        0.0f,
        [](float current_result, Pointer& p){
            return current_result + p->salary();
        }
    );

    return result / data.size();
    
    // return std::accumulate(
    //     data.begin(),
    //     data.end(),
    //     0.0f,
    //     [](float current_result, Pointer& p){
    //         return current_result + p->salary();
    //     }
    // )/data.size();
    
};