#include<stdio.h>
int power(int n, int m){
    int res=1;
    for (int i = 0; i < m; i++)
    {
        res=res*n;
    }
    return res;
}
int main(){
    int ans=power(2,3);
    printf("%d\n",ans);
    return 0;
}