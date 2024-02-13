#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

extern std::mutex mutex;
extern std::condition_variable cv;

extern bool condition1;
extern bool condition2;

void waitForCondition1() ;
void waitForCondition2();

void setCondition1() ;

void setCondition2() ;
