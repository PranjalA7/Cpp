#include<stdio.h>
int add(int n){
    int rem, sum=0;
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int ans=add(n);
    printf("Sum of digits of give number is %d\n",ans);
    return 0;
}