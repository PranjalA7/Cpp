#include<iostream>

enum class Rank{
    FIRST,
    SECOND,
    THIRD
};

enum class Gear{
    FIRST,
    SECOND,
    THIRD
};

void Magic(int data){

}
int main()
{
    //enum name should be used
    enum Rank r1= Rank::FIRST;
    enum Gear g1= Gear::FIRST;
    //cant compare different enums
    if (r1 == g1)
    {
        std::cout<<"Oopss!!\n";
    }
    //no auto type cast
    Magic(r1);
}