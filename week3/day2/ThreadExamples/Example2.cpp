/*Create an array if 5 threads that calculate the square
of ONE NUMBER FROM AN ARRAY OF 5 INTEGERS, store answers in a result container*/

#include <array>
#include <thread>
#include <iostream>
#include <functional>


void InstantiateThreads(
    std::array<std::thread, 5>& threadarr,
    std::function< void(int,int) > f1,
    std::array<int, 5> data){
        auto itr = data.begin();
        for(int i =0; i < 5; i++){
            threadarr[i] = std::thread(f1, *itr++, i);
        }
}

void JoinThreads(std::array<std::thread, 5>& threadarr){
    //join thread to block main
    for(std::thread& t : threadarr){
        if(t.joinable()){
            t.join();
        }
    }
}

void DisplayResult(std::array<int , 5>& result, std::array<int, 5>& data){
    //for each for display
    auto itr = data.begin();
    for(int val : result){
        if(itr != data.end()){
            std::cout << "Square of number "<< *itr << " is: " << val << "\n"; 
        }
        itr++; 
    }
}

void StartApp() {
    std::array<int, 5> data {10, 20, 30, 40, 50};
    std::array<int, 5> result;

    auto f1 = [&](int number, int idx) {result[idx] = number * number;};

    std::array<std::thread, 5> threadarr;
    InstantiateThreads(threadarr, f1, data);
    JoinThreads(threadarr);
    DisplayResult(result, data);
}

int main(){
    StartApp();
}