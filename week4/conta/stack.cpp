#include <iostream>
#include <stack>
#include <queue>

class MyObject {
public:
    MyObject(int value) : value(value) {}

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    // Using std::stack with custom objects
    std::stack<MyObject> myStack;

    // Push objects onto the stack
    myStack.push(MyObject(10));
    myStack.push(MyObject(20));
    myStack.push(MyObject(30));

    // Pop objects from the stack
    while (!myStack.empty()) {
        MyObject obj = myStack.top();
        std::cout << "Stack Top: " << obj.getValue() << std::endl;
        myStack.pop();
    }

    // Using std::queue with custom objects
    std::queue<MyObject> myQueue;

    // Enqueue objects into the queue
    myQueue.push(MyObject(40));
    myQueue.push(MyObject(50));
    myQueue.push(MyObject(60));

    // Dequeue objects from the queue
    while (!myQueue.empty()) {
        MyObject obj = myQueue.front();
        std::cout << "Queue Front: " << obj.getValue() << std::endl;
        myQueue.pop();
    }

    return 0;
}
