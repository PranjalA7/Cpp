#include<stdio.h>
int gcd(int n, int m){
    for (int i = n; i>0; i--)
    {
        if(n%i==0&&m%i==0){
            return i;
        }
    }    
}
int main(){
    int n, m;
    printf("enter two numbers to find gcd ");
    scanf("%d%d",&n,&m);
    int ans=gcd(n,m);
    printf("GCD is %d\n",ans);
    return 0;
}