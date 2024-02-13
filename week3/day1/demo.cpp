#include <iostream>
class demo{
    private:
    int id;
    std::string name;
    public:
    demo() = default;
    ~demo() {
        std::cout << "Object Destroyed" << "\n";
    }
};

int main(){

    demo d1;
    //delete d1;
    
}