#include<iostream>
class Account
{
    int balance;
    public:
    Account(int b=5000)
    {
        balance=b;
    }
    void withdraw(int amount)
    {
        if(balance-amount<3000)
            throw "Low balance error";
        balance-=amount;
    }
    void dispaly(){
        std::cout<<balance;
    }
};
int main(){
    Account A(15000);
    try
    {
        A.withdraw(14000);
    }
    catch(const char* msg)
    {
        std::cout<<msg<< '\n';
    }
    A.dispaly();
    return 0;
}