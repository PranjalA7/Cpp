#include<iostream>
#include"header.h"

int main(){
    //Electricity *arr=new Electricity [10];
    Electricity arr[2]={};
    for (int k = 0; k < 2; k++)
    {
        arr[k].accept();
    }
    arr[0//Output func
].display();
    std::cout<<"\nElectricity bill= "<<arr[0].calculateElectricityBill()<<std::endl;
    return 0;
}

