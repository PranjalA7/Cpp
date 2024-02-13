#include "Functionalities.h"

int main(){

    Container data;
    std::thread t1(CreateObjects, std::ref(data));
    t1.join();
    
    std::cout << "Bonus of all Employees";
    std::thread t2(BonusOfAllEmoloyees, std::ref(data));
    t2.join();


    std::thread t3(HighestSalaryEmployee, std::ref(data));
    t3.join();

    std::cout << "\nEmployee locations of give Grade\n";
    Grade gr;
    std::thread t4(EmployeesWithGivenGrade, std::ref(data), std::ref(gr));
    gr = Grade::A;
    flag = true;
    cv.notify_one();
    t4.join();


    
    std::promise<std::string> pr;
    std::future<std::string> ft = pr.get_future();

    FullTimeEmployee e1;

    std::future<std::string> result = std::async(std::launch::async, ProjectNameOfGivenEmployee, std::ref(data), std::ref(ft));

    std::string val = "e102";
    
    pr.set_value(val);

    std::cout << "Project name of given employee ID\n" << result.get() << "\n";
    


    
}