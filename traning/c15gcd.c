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
    int ans=gcd(20,50);
    printf("%d",ans);
    return 0;
}