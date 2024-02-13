#include "Functionalities.h"

int main() { 
    Container data;
    data[0] = std::make_shared<Employee>(101,"Pranjal", 700.0f);
    data[1] = std::make_shared<Employee>(102,"Pranjal", 700.0f);
    data[2] = std::make_shared<Employee>(102,"Pranjal", 700.0f);

    std::cout << AverageSalary(data) <<"\n";
}