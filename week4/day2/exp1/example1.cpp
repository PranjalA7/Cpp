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

int CountOfEmpWithNameMoreThan7Char(const Container& data){

    int count = std::count_if(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer>& ptr) {   return (ptr.second->name()).size() < 7;    }
    );

    return count;
}

void SalaryOfEmployeeByID(const Container& data, int id){
    // auto itr = std::find_if(data.begin(), data.end(), 
    //     [&](const std::pair<int, Pointer> ptr){
    //         return ptr.first == id;
    //     }
    // );

    auto itr = data.find(id);
    if (itr == data.end())
    {
        std::cout << "Id not found\n";
    }
    else{
        std::cout << itr->second->salary();
    }
    
    

    //return itr->second->salary();
}

// float AverageSalaryOfEmpWhoseIDIsGiven(const Container& data, std::vector<int> id){
//     float result = std::accumulate(data.begin(), 
//         data.end(), 
//         0.0f,
//         [&](float current, const std::pair<int, Pointer> ptr){
//             if (std::any_of(
//                     id.begin(), 
//                     id.end(), 
//                     [&](int i){
//                         return i == ptr.first;
//                     }
//                 )
//             )
//             {
//                 return current + ptr.second->salary();
//             }
//             return current;
//         }
//     );

//     return result / id.size();
// }

void AverageSalaryOfEmpWhoseIDIsGiven(const Container& data, std::vector<int> ids){
    float total = 0.0f;
    int count = 0;

    for(int id : ids){
        auto itr = data.find(id);

        if (itr != data.end())
        {
            count++;
            total += itr->second->salary();
        }
        
    }

    std::cout << "Average of salaries: " << total / count << "\n";
}




int main(){
    Container Data;
    CreateObjects(Data);
    TotalSalary(Data);
    std::cout << FindMinSalaryEmployeeName(Data) << "\n";
    std::cout << CountOfEmpWithNameMoreThan7Char(Data) << "\n";
    SalaryOfEmployeeByID(Data, 102);
    AverageSalaryOfEmpWhoseIDIsGiven(Data, {102, 103, 101});
    
}


//return the count of employees whose name is less than 7 character
//find the salary for the employee whose ID is recieved as a parameter (find_if)
//find the average salary for only those employees whose ID is passed as a vector of integers to the funvtion