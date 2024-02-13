#include<stdio.h>
int lcm(int n, int m){
    for (int i = n; i >0 ; i++)
    {
        if (i%n==0&&i%m==0)
        {   
            return i;
        }
    }
}
int main(){
    int ans=lcm(4,2);
    printf("%d",ans);
    return 0;
}