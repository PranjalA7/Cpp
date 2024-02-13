#include<iostream>
#include<functional>

void square(int number) {
    std::cout << number * number << "\n";
}
void cube( int number ) {
    std::cout << number * number * number << "\n";
}

//c syntax
// void operation(void (*logic) (int), int data){
// modern syntax
void operation(std::function< void(int) > logic, int data){
    logic(data);
}

int main(){

    //func pointer
    void (*ptr)(int) = &square;

    operation(square, 3);
    operation([]( int number ) {std::cout << number * number * number << "\n";}, 3);
    
// a lamda with nothing in capture clause is implicitly convertible to a func pointer 
}