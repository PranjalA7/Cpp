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
    int n, m;
    printf("enter two numbers to find LCM ");
    scanf("%d%d",&n,&m);
    int ans=lcm(n,m);
    printf("LCM of given numbers is %d\n",ans);
    return 0;
}