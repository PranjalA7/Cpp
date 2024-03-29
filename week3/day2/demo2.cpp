#include <iostream>
#include <thread>
#include <array>

std::array<int, 10> result;

void square(std::array<int, 5>& data){
    int k=0;
    for(int val : data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++] = val* val;
    }
}

void cube(std::array<int, 5>& data){
    int k=5;
    for(int val : data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++] = val * val * val;
    }
}

int main(){
    std::array<int ,5> data {1,2,3,4,5};
    
    std::thread t1(&square, std::ref(data));
    std::thread t2(&cube, std::ref(data));

    t1.join();
    t2.join();    

    for(int val : result){
        std::cout << val << "\t";
    }
    std::cout << "\n";
}