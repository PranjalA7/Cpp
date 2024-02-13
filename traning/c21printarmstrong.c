#include<stdio.h>
int check(long int n){
    long int temp=n;
    long int rem, sum=0;
    while (n>0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n/=10;
    }
    if (sum==temp){
        return 1;
    }
    else{
        return 0;
    }
}
void printnarm(int a){
    long int j=0,count=0;
    while (count<=a)
    {
        if (check(j))
        {
            printf("%ld\n",j);
            count++;
        }
        j++;
    }
    
}
int main(){
    printnarm(10);

    return 0;
}