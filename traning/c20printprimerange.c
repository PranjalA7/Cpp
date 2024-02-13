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
void printrange(int a, int b){
    for (int i=a; i <= b; i++)
    {
        if(!isprime(i)){
            printf("%d\n",i);
        }
    }
    
}
int main(){
    printrange(100,200);
    return 0;
}