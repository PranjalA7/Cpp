#include <mutex>
#include <thread>
#include <iostream>
#include <array>

std::mutex mt;
/*
    A regular mutex works based in lock and unlock analogy
    A scope based lock_guard gets applied at the point of instantiation and is unlocked
    automatically when the object goes out of scope
*/


void CalculateSquare(std::array<int, 5>& arr){
    for(int val : arr){
        std::lock_guard<std::mutex> lk(mt);
        std::cout << val * val << "\n";
    }
}

void CalculateCube(std::array<int, 5>& arr){
    for(int val : arr){
        std::lock_guard<std::mutex> lk(mt);
        std::cout << val * val * val << "\n";
    }
}

int main() {
    std::array<int, 5> arr {10, 20, 30, 40, 50};
    std::thread t1(&CalculateSquare, std::ref(arr));
    t1.join();
    std::thread t2(&CalculateCube, std::ref(arr));
    t2.join();
}