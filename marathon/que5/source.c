#include<stdio.h>
#include"header.h"
int ModifyArray(int arr[], int m, int n){
    //if the number is not present 
    int flag=0;
    for (int h = 0; h < n; h++)
    {
        if (arr[h]==m)
        {
            flag=1;
        }
    }
    if (!flag)
    {
        return -1;
    }
    //making copy of array
    int arr2[10]={};
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    int a=0, b=9;
    //arranging the elements
    for (int j = 0; j < n; j++)
    {
        if (arr2[j]<m)
        {
            arr[a]=arr2[j];
            a++;
        }
        else if (arr2[j]>5)
        {
            arr[b]=arr2[j];
            b--;
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (m==arr2[k])
        {
            arr[a]=m;
            a++;
        }  
    }
    //printing array
    printf("Modified array:\n");
    printf("[");
    for (int l = 0; l < n; l++)
    {   
        if (l==9)
        {
            printf("%d ",arr[l]);
        }
        else
        {
            printf("%d, ",arr[l]);
        }
    }
    //finding index of magic num
    printf("]");
    for (int h = 0; h < n; h++)
    {
        if (arr[h]==m)
        {
            return h;
        }
    }
}