#include<iostream>
#include<memory>
/*
    uniform initialization

*/

struct Employee
{
    int id;
    std::string name;
};
class Car
{
private:
    int _id;
    std::string _name;

public:
    Car()=default;
    Car(int id, std::string name){_id=id; _name= name; }
    ~Car() {}
};

int main(){
    int n1 {10};
    int* ptr {&n1};
    Employee e1{101, "Pranjal"};
    Car c1{123, "City"};
    int arr[3] {1, 2, 3};
    std::shared_ptr<int> ptr {ptr};

}