#include<stdio.h>
int isprime(int n){
    int flag=0;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
void primepri(int m){
    int count=0;
    int n=2;
    while (count<m)
    {
        if(!isprime(n)){
            printf("%d\n",n);
            count++;    
        }
        n++;
    }
}    
int main(){
    printf("Enter number of prime numbers to be printed ");
    int m;
    scanf("%d",&m);
    printf("First %d prime numbers are:\n",m);
    primepri(m);
    return 0;
}