//byreference_semantics.cpp
#include<iostream>

int& Magic(int& n1){
    std::cout<<"Address of n1 in Magic: " << &n1 <<"\n";
    int ans = n1*100;
    return ans;

}
int main(){

    int data = 20;
    std::cout<<"Address of data in main: "<<&data << "\n";
    int result = Magic(data);
}