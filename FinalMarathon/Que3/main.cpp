#include<iostream>
#include"header.h"
int main(){
    Customer cust;
    std::cout<<cust;
    cust.accept();
    std::cout<<cust;
    Bill* arr=new Bill[3];
    for (int a = 0; a < 1; a++)
    {
        arr[a].accept();
    }
    search(arr);
    int sum=0;
    for (int x = 0; x < 3; x++)
    {
        sum+=arr[x].get_ba();
    }
    std::cout<<"Bill Amount: "<<sum;
    //std::cout<<arr[1];
    delete arr;
    delete[] arr;
    return 0;
}