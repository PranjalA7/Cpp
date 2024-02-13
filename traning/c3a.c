#include<stdio.h>
int main(){
    int num, rem;
    int rev=0;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==num){
        printf("The number is same when reversed.");
    }
    else
    {
        printf("%d",rev);
    }
    return 0;
}