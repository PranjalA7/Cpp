#include<iostream>
#include"header.h"
int main(){
    extern int i;
    Flight *arr=new Flight[5];
    int n=1,choice;
    while (n)
    {
        std::cout<<"\nEnter Choice 1 Feedinfo 2 Showinfo 3 Calculate Total Flight 4 Exit 5 Search Flight\n";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            if (i>=5)
            {
               std::cout<<"\nStack Full";
               break;
            }
            arr[i].feedInfo();
            break;
        case 2:
            if(i==0)
            {
                std::cout<<"\nStack is Empty";
                break;
            }
            for (int j = 0; j < i; j++)
            {
                arr[j].showInfo();
            }
            
            break;
        case 3:
            std::cout<<"\nFlight objects: "<<i<<std::endl;
            break;
        case 4:
            n=0;
            break;
        case 5:
            int p=arr[0].search();
            if (p==-1)
            {
                std::cout<<"\nNot Found\n";
                break;
            }
            arr[p].showInfo();
            break;
        
        }
    }
    delete arr;
    return 0;
}


