#include<stdio.h>
int cub(int n){
    return n*n*n;
}
int check(int m){
    int rem, sum=0, flag=0;
    int temp=m;
    while (m>0)
    {
        rem=m%10;
        sum+=cub(rem);
        m/=10;
    }
    if (sum==temp)
    {
        flag=1;
    }
    return flag;
}
int main(){
    int ans=check(153);
    printf("%d",ans);
    return 0;
}