#include <algorithm>
#include <iostream>
#include <memory>
#include <unordered_map>
#include <numeric>

class Employee
{
private:
    std::string _name;
    float _salary;
public:
    Employee() = default;
    Employee(const Employee& ) = default;
    Employee& operator=(const Employee&) = default;
    Employee(Employee&&) = default;
    Employee& operator=(Employee&& ) = default;
    ~Employee() = default;

    Employee(std::string name, float salary)
        :_name(name), _salary(salary)
    {}

    float salary() const { return _salary; }
    std::string name() const { return _name; }

};

using Pointer = std::shared_ptr<Employee>;
using Container = std::unordered_map<int, Pointer>;

void CreateObjects(Container& data){
    data.emplace(
        std::make_pair(101, std::make_shared<Employee>("Pranjal", 70000.0f))
    );
    data.emplace(
        std::make_pair (102, std::make_shared<Employee>("Harshit", 50000.0f))
    );
    data.emplace(
        std::make_pair(103, std::make_shared<Employee>("Sid", 60000.0f))
    );
    data.emplace(
        std::make_pair(104, std::make_shared<Employee>("Pratik", 30000.0f))
    );
    data.emplace(
        std::make_pair(105, std::make_shared<Employee>("Vishal", 20000.0f))
    );
}

/*
    total salary for all employees
*/
    

void TotalSalary(const Container& data){
    if(data.empty()){
        throw std::runtime_error{"Empty!"};
    }

    float total = 0.0f;

    for(auto& [k, v] : data){
        total = total + v->salary();
    }

    /*
        alternatively
    */
    for(auto itr = data.begin(); itr != data.end(); itr++){
        total = total + itr->second->salary();
    }

    for(const std::pair<int, Pointer>& ptr : data){
        total = total + ptr.second->salary();
    }

    std::cout << std::accumulate(data.begin(), data.end(), 0.0f,
        [](float sum_till_current, const std::pair<int, Pointer>& row){
            return sum_till_current + row.second->salary();
        }   
    ) << "\n";

}

std::string FindMinSalaryEmployeeName(const Container& data){
    if(data.empty()){
        throw std::runtime_error{"Empty!"};
    }

    /*
        min element will return an iterator to the min element found 

    */

    auto itr = std::max_element(data.begin(), data.end(), 
        [](const std::pair<int, Pointer>& pair1, const std::pair<int, Pointer>& pair2){
            return pair1.second->salary() < pair2.second->salary();
        }
    );

    return itr->second->name();
}

//Day3

void CheckConditionAtLeastOne(const Container& data){
    if(data.empty()){
        throw std::runtime_error("Data is emptty");
    }

    bool flag = std::any_of(data.begin(), data.end(), 
        [](const std::pair<int, Pointer>& ptr){
            return ptr.second->salary() > 80000.0;
        }
    );

    std::cout << flag << "\n";
}

/*
 * count the number of map pair where salary is above 50000
*/

void CountAbove50000Employees(const Container& data){
    if(data.empty()){
        throw std::runtime_error("Data is emptty");
    }

    int count = std::count_if(data.begin(), data.end(), 
        [](const std::pair<int, Pointer>& ptr){
            return ptr.second->salary() > 50000.0;
        }
    );

    std::cout << count << "\n";
}


int main(){
    Container Data;
    CreateObjects(Data);
    TotalSalary(Data);
    std::cout << FindMinSalaryEmployeeName(Data) << "\n";
    CheckConditionAtLeastOne(Data);
    CountAbove50000Employees(Data);
}