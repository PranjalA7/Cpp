#include <iostream>

class Myclass
{
private:
    int _id;
public:
    Myclass() = delete;
    Myclass(Myclass&&) = default;
    Myclass (const Myclass&) { std::cout << "Copy COnstructor\n";}
    Myclass &operator=(Myclass&&) = delete;
    Myclass &operator=(const Myclass&) = delete;
    ~Myclass() = default;
    Myclass (int id) : _id(id) {}
};

Myclass Magic(Myclass& obj){
    Myclass temp(obj);
    std::cout << "Adress of temp is: " << &temp << "\n";
    return temp;
}

int main() {
    //obj gets instantiated
    Myclass obj(100);

    std::cout << "Adrress of obj is: " << &obj << "\n";

    Myclass return_obj = Magic(obj);
    std::cout << "Adress of return_obj is: " << &return_obj << "\n";
}