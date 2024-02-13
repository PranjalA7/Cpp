#include <condition_variable>
#include <iostream>
#include <thread>

/*
    DisplaySquare
        - it should print the square of the number recieved as input from the user 
    
    Main
        - Main will take cin input and store value in a global variable
*/

int number = 0;
bool flag = false;
std::condition_variable cv;
std::mutex mt;

void square(){
    std::unique_lock<std::mutex> ul(mt);
    cv.wait( ul, [](){ return flag; } );
    std::cout << "Square of " << number << " is: " << number * number << "\n";
}

int main() {

    std::thread t1(&square);

    std::cin >> number;
    flag = true; // ths specifies condition is met

    cv.notify_one(); //signal sent from main to OS that we can now invoke the waiting thread
    t1.join();
}

//concurrency in action