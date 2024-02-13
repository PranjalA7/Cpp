#include <iostream>
#include <functional>

auto n1 = 10;

/*
    WHAT?
        Lambdas are callables like regular function
        (top-level / Global functions)
        Lambdas have no name i.e. they are anonymous functions

    WHY?
        they help us to pass, recieve, store and utilize logic in the
        form of an object with proper type system support

        They can be used for specifying a short-term, one time or scope
        based logical process to be performed on some data

        CPP lambdas have a concept of capture clause which allows them
        to act like closures
*/

/*
    [n1] : capture n1 only by value
    [=] : capture and use all variables from surround function by value
    [&n1] : capture n1 by lvalue reference
    [&] : capture and use all variables from surrounding function by refernce

*/

int main() {

    int n1 = 100;

    auto lfn1 = [](int number) { return number * number; };
    std::array<std::function<int(int)> , 1>arr {lfn1};

    /*
        lambdas to be used as closures 
        (also known as lambda closures)
    */
    auto lfn2 = [n1]() mutable { n1 = 11; return n1 * n1; };

    std::cout << lfn1(n1);
}

/*
    Lambda types
        Predicate - bool return
        Binary operation - takes 2 operands and performs binary opearation
        Comparator - takes 2 operands and compares them
*/