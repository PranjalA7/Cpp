#include <iostream>

int main() {
    int x = 10;

    // Lambda function with capture by value and no parameters
    auto lambda = +[]() {
        // Access to 'x' from the enclosing scope
        std::cout << "Value of x inside lambda: " << x << std::endl;
    };

    lambda(); // Invoke the lambda function

    return 0;
}
