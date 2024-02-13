#include<stdio.h>
#include"header.h"
//function definition
int fndcoin(int arr[], int c){
    //Loop for duplicate 
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                return -1;
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        if (c>arr[4])
        {
            return 5;
        }
        //if the coin is already there
        if (c==arr[k])
        {
            return k;
        }
        //if the coin is new
        if (c<arr[k])
        {
            return k;
        }
    }
}