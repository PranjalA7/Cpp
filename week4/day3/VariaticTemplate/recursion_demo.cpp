//variadic templates (templates that can accept variable number of arguments)
//eg make_shared function template

/**
 * use concept of recursion and base case
 * 
 * my base case in addition is: adding only one value
*/
#include <iostream>

//template <typename T>
// T add(T n1){
//     return n1;
// }

// template<typename T, typename... Args>
// auto add(T n1, Args... args){
//     return n1 + add(args...);
// }

template<typename... T>
auto add(T... args){
    return (args + ...);
}


int main(){
    std::cout << add(10, 20, 30) << "\n";
    std::cout << add(10, 20.1f, 30) << "\n";
}