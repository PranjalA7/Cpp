#include<iostream>
#include"Functionalities.h"
#include<thread>
 
int main(){
    Container(data);
    std::thread t1(CreateObjects,std::ref(data));
    t1.join();
 
    std::thread t2(CalculateTaxPayable,std::ref(data));
 
    std::thread t3(CallParenOperator,std::ref(data));
 
    
    t2.join();
    t3.join();
 
    
}