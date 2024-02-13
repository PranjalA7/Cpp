#include<iostream>
#include"Employee.h"
#include<memory>

using emp_pointer = std::shared_ptr<Employee>;

void Magic(emp_pointer& emp){

    emp->setId(100);
    
}

int main(){
emp_pointer e1 = std::make_shared<Employee>(101);
Magic(e1);

}