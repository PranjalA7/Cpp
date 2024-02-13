#include <set>
#include <iostream>
#include <functional>

#include <vector>


template<typename T>
void Display(std::set<T>& data){
    for(const T& val : data){
        std::cout << val << "\n";
    }
}

struct Employee
{
    int _id;
    float _salary;

    Employee(int id, float salary) : _id(id), _salary(salary) {}

    bool operator<(const Employee& rhs) const{
        return _salary > rhs._salary;
    }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
        os << "_id: " << rhs._id
           << " _salary: " << rhs._salary;
        return os;
    }

};



int main(){
    Employee e1(101, 83000.0f), e2(202, 72000.0f), e3(100, 75000.0f);

    std::set<Employee> s1 {e1, e2, e3};

    

    Display<Employee>(s1);

}

 
/*
 *  1) Comparator with how many conditions? 
 *  Ans : Comparator must be designed for strict weak ordering which requires equivalence check 
 *  
 *  2) I have smart pointers and I want to store them in set?
 *  Write a comparison function for smart_pointer<T> as a global function (can use functors in many cases) 
 * 
 *  3) What about marathon
 *  Ans : final marathon may include questions on set of primitive types of user-defined
 *  custom classes but NOT USING SMART POINTERS
 *  
*/

