#include<iostream>
#include<cstring>
class lowbalancexception : std::exception
{
    char arr[100];
    public:
    lowbalancexception(char* str)
    {
        strcpy(arr,str);
    }
    const char* what()
    {
        return arr;
    }
};
class Account
{
    int balance;
    public:
    Account(int b=10000)
    {
        balance=b;
    }
    void withdraw(int amount)
    {
        if (balance-amount<1000)
        {
            throw lowbalancexception("Minimum balance should be 1000\n");
        }
        balance-=amount;
    }
    void display()
    {
        std::cout<<"Balance= "<<balance<<"\n";
    }
};
int main()
{
    Account a1(15000);
    try
    {
        a1.withdraw(14000);
        a1.display();
    }
    catch(lowbalancexception l)
    {
        std::cout<<l.what();
    }

    return 0;
}