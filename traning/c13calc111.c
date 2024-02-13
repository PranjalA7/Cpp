#include<stdio.h>
int calc(int n){
    int num=1,sum=0;;
    for (int i = 1; i <= n; i++)
    {
        sum+=num;
        num=num*10+1;
    }
    return sum;
    
}
int main(){
    int ans=calc(2);
    printf("%d",ans);
    return 0;
}