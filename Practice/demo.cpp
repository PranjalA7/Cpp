#include "func.h"
int main() {
    std::thread thread1(waitForCondition1);
    std::thread thread2(waitForCondition2);

    // Simulate some work
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // Set condition 1
    setCondition1();

    // Simulate some more work
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // Set condition 2
    setCondition2();

    thread1.join();
    thread2.join();

    return 0;
}
