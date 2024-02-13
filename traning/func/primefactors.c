#include<stdio.h>
int isprime(int n){
    int flag=1;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
void factors(int m){
    for (int i = 2; i <= m/2; i++)
    {
        if (m%i==0 && isprime(i))
        {
            printf("%d\n",i);
        }
    }    
}
int main(){
    printf("Enter a number ");
    int n;
    scanf("%d",&n);
    printf("Prime factors of %d:\n",n);
    factors(n);
    return 0;
}