#include <iostream>
#include <thread>
#include <mutex>
/* 

*/
std::mutex mt;
int amount = 1000;

void Withdraw(){
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        //critical section start
        mt.lock();
        amount -= 10;
        mt.unlock();
        //critical section end
    }
}

void Deposit(){
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        //critical section start
        mt.lock();
        amount += 10;
        mt.unlock();
        //critical srction end
    }
}

int main(){
    std::thread t1(&Withdraw);
    std::thread t2(&Deposit);

    t1.join();
    t2.join();

    std::cout<< amount << "\n";
}