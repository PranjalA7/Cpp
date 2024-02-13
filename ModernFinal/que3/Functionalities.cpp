#include "Functionalities.h"
#include <mutex>
#include <algorithm>

std::mutex mt;
bool flag;
std::condition_variable cv;

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Harshit", "e101", 7000.0f, "BMW", "Mumbai", Grade::A, 30  
    ));
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Pranjal", "e102", 6000.0f, "Porsche", "Pune", Grade::A, 25  
    ));
    data.emplace_back(std::make_shared<FullTimeEmployee>(
        "Sid", "e103", 5000.0f, "Honda", "Pune", Grade::C, 10  
    ));
}

void BonusOfAllEmoloyees(const Container &data)
{
    for(const Pointer& ptr : data){
        std::lock_guard<std::mutex> lg(mt);
        std::cout << ptr->CalculateBonus()<< " ";
    }
    
}

void HighestSalaryEmployee(const Container &data){
    auto itr = std::max_element(data.begin(), data.end(), 
            [&](const Pointer& emp1, const Pointer& emp2){
                return emp1->salary() < emp2->salary();
            }
        );
    mt.lock();
    std::cout << "Employee with highest salary: \n" << **itr << "\n\n";
    mt.unlock();
}

void EmployeesWithGivenGrade(const Container &data, Grade& gr){
    
    std::unique_lock<std::mutex> ul(mt);
    cv.wait( ul, [](){ return flag; } );
    for(const Pointer& ptr : data){
        if (ptr->grade() == gr)
        {
            std::cout << ptr->employeeLocation() << "\n";
        }
    }
}

std::string ProjectNameOfGivenEmployee(const Container &data, std::future<std::string>& ft)
{
    std::string id = ft.get();
    auto itr = std::find_if(data.begin(), data.end(), 
            [&](const Pointer& ptr){ return ptr->id() == id; }
        );
    if (itr == data.end())
    {
        return "ID not found";
    }
    return (*itr)->projectName();
}
