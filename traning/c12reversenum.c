#include<stdio.h>
int add(int n){
    int rem, rev=0;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int ans=add(n);
    printf("%d\n",ans);
    return 0;
}