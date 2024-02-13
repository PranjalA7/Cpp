#include<stdio.h>
#include"header.h"
//function for one digits
int oned(int n){
    return n*n;
}//function for two digits
int twod(int n){
    int rem, sum=0, temp=n;
    for (int i = 0; i < 2; i++)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return temp-sum;
}//function for three digits
int threed(int n){
    int rem, rev=0;
    for (int j = 0; j < 3; j++)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}//function for four digits
int fourd(int n){
    int rem,sum=0, temp=n;
    for (int k = 0; k < 4; k++)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return (temp%sum);
}
//func for checking number of digits
int puzzleAdv(int num){
    int choice;
    if (num>0&&num<10)
    {
        choice=1;
    }
    else if (num>9&&num<100)
    {
        choice=2;
    }
    else if (num>99&&num<1000)
    {
        choice=3;
    }
    else if (num>1000&&num<10000)
    {
        choice=4;
    }
    return choice;
}