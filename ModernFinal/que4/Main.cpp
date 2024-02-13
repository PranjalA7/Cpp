#include "Functionalities.h"
#include<future>

int main(){

    Container data;
    CreateObjects(data);
    
    std::future<std::optional<Container>> result1 = std::async(std::launch::async, EmployeesBelowSixYearsExp, std::ref(data));

    std::optional<Container> ans = result1.get();

    if (ans.has_value())
    {
        std::cout << "Employees Below 6 exp :\n";
        Container res = ans.value();
        for(auto& [k, v] : ans.value()){
            std::visit([&](auto &&val){
                std::cout << *val <<"\n";
                },
                v
            );
        }
    }
    else{
        std::cout << "Vector returned no values" << "\n";
    }

    std::future<float> result2 = std::async(std::launch::async, AverageSalaryOfTester, std::ref(data));
    std::cout << "Average Salary of Tester: " << result2.get() <<"\n";
    
    std::future<int> result3 = std::async(std::launch::async, CountOfEmployeesAboveThreshold, std::ref(data));
    std::cout << "Count of employees above salary 5000: " << result3.get() <<"\n";
    
    std::string id = "E102";
    std::future<float> result4 = std::async(std::launch::async, SalaryOfGivenEmployee, std::ref(data), std::ref(id));
    std::cout << "Salary of given Employee: " << result4.get() <<"\n";

    std::future<bool> result5 = std::async(std::launch::async, CheckEmployeesHaveSalaryAboveThreshold, std::ref(data));
    std::cout << "Is all salaries above 6000: " << result5.get() <<"\n";
}
