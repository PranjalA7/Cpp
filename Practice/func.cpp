#include "func.h"

std::mutex mutex;
std::condition_variable cv;

bool condition1 = false;
bool condition2 = false;

void waitForCondition1() {
    std::unique_lock<std::mutex> lock(mutex);
    cv.wait(lock, []{ return condition1; });
    std::cout << "Condition 1 met!\n";
}

void waitForCondition2() {
    std::unique_lock<std::mutex> lock(mutex);
    cv.wait(lock, []{ return condition2; });
    std::cout << "Condition 2 met!\n";
}

void setCondition1() {
    {
        std::lock_guard<std::mutex> lock(mutex);
        condition1 = true;
    }
    cv.notify_one(); // Notify one waiting thread for condition 1
}

void setCondition2() {
    {
        std::lock_guard<std::mutex> lock(mutex);
        condition2 = true;
    }
    cv.notify_one(); // Notify one waiting thread for condition 2
}
